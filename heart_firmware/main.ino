#include <math.h>

#define BUTTON_LIGHT D3
#define BUTTON_A D5
#define BUTTON_B D6
#define BUTTON_C D7

bool is_light_fading = true;
int light_counter = 0;
int light_step = 1;
unsigned int light_off_time = 0;
#define LIGHT_COUNTER_MAX 1000 * (3.14159 * 2)

void setup() {
    Serial.begin(9600);

    Particle.function("setLight", onLightState);

    pinMode(BUTTON_LIGHT, OUTPUT);

    pinMode(BUTTON_A, INPUT);
    pinMode(BUTTON_B, OUTPUT);
    pinMode(BUTTON_C, INPUT);

    digitalWrite(BUTTON_LIGHT, HIGH);
    digitalWrite(BUTTON_B, HIGH);

    set_light(true);
    RGB.control(true);
}

void loop() {
    bool buttonPressed = digitalRead(BUTTON_A) == HIGH;
    //bool buttonPressed2 = digitalRead(BUTTON_C) == HIGH;

    if (buttonPressed) {
        Serial.println("button pressed");
        Particle.publish("trigger_spoil_email");
        set_light(false);
        delay(1000);
    }

    unsigned int now = millis();
    if ((now - light_off_time) > 30000) {
        Serial.println("resetting light");
        set_light(true);
    }
    fadeLight();
}

int onLightState(String cmd) {
    bool lightOn = (cmd.equals("on"));
    digitalWrite(BUTTON_LIGHT, (lightOn) ? HIGH : LOW);
    return 0;
}

void set_light(bool state) {
    light_off_time = millis();
    is_light_fading = state;

    if (!state) {
        Serial.println("light off");
        RGB.color(0,0,0);
    }
}



void fadeLight() {
    if (!is_light_fading) {
        return;
    }

    if (light_counter > LIGHT_COUNTER_MAX) {
        light_step = -1 * light_step;
    }
    else if (light_counter < 0) {
        light_step = -1 * light_step;
    }
    light_counter = light_counter + light_step;

    int sineValue = sin(light_counter / 1000.0) * 1000.0;
    int color = map(sineValue, -1000, 1000, 0, 255);

    //String line = String::format("counter %d, sineValue %d, light %d", light_counter, sineValue, color);
    //Serial.println(line);

    RGB.color(0, color, 0);
    analogWrite(BUTTON_LIGHT, color);
}



