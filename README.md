Backstory
===

Preparing the Heart!
===

Step 1.) Purchase a large box of chocolates in a container you want to repurpose.

![Box of Chocolates](images/IMG_8382.png)

Step 2.) Immediately consume those chocolates.

```
    image not available... :) 
```

Step 3.) Find the centerline of the lid, and drill a hole to fit our button

![Finding the centerline](images/IMG_8388.png)

![After the button is installed](images/IMG_8389.png)


Step 4.) Lets connect some wires to that button, I used male header pins, and jumper wires, but you don't need to make your life as difficult.  If you're worried about your pins shorting out like I was, put a bunch of liquid tape on there.  People love liquid tape on their gifts.

![Connecting Wires](images/IMG_8392.png)


Step 5.) Take some photos because it's looking good!

![Glamour Shot](images/IMG_8404.png)


Step 6.) Connect your jumper wires to a Particle Electron, it's an easy to use cellular dev kit that will get our messages securely to the internet, and it takes care of our battery needs.  The wires should look a bit like this:
note: The purple D4 wire should be connected to D3 so we can PWM it.

![Wiring](images/IMG_8391.png)

Step 7.) Grab this code and flash it to your electron in the Particle Online IDE! 
https://github.com/dmiddlecamp/lambda-email/tree/master/heart_firmware
  
  
Setting up the SNS Topic
===

Open up your [AWS SNS dashboard](https://console.aws.amazon.com/sns/v2/home), and create a new topic:

![Setting up the SNS Topic](images/Screen Shot 2017-02-11 at 7.14.55 PM)


Configuring the Lambda Function
===

[Read the guide on getting that configured here](lambda_emailer/README.md)


Setting up the Lambda Function
===

Next lets create a [AWS Lambda function](https://console.aws.amazon.com/lambda/home), triggered off that new SNS Topic: 

![Setting up the Lambda Function](images/Screen Shot 2017-02-11 at 7.16.14 PM.png)


setting environment variables
![Set your Environment Variables](images/Screen Shot 2017-02-12 at 5.13.01 PM.png)


lets increase the timeout a bit as well, just in case the server is slow:
![Increasing Timeout](images/Screen Shot 2017-02-12 at 5.15.05 PM.png)


don't forget to give the role a name
![Setting the role](images/Screen Shot 2017-02-12 at 5.15.22 PM.png)


Create an IAM Role to Publish to the Topic
===

![Adding a new user](images/Screen Shot 2017-02-13 at 12.10.58 AM.png)

![Setting Programmatic Access](images/Screen Shot 2017-02-13 at 12.11.06 AM.png)

![Adding SNS Permissions](images/Screen Shot 2017-02-13 at 12.11.16 AM.png)

![Grabbing AccessKeyId and Token](images/Screen Shot 2017-02-13 at 12.11.27 AM.png)

Setting up the Webhook to trigger the SNS Topic
===

[Checkout the Webhook guide here](sns-webhook/README.md)


Testing!
===



Making it live!
===
