Backstory
===

Preparing the Heart!
===

Step 1.) Purchase a large box of chocolates in a container you want to repurpose.

Step 2.) Immediately consume those chocolates.

Step 3.) Find the centerline of the lid, and drill a hole to fit our button

Step 4.) Lets connect some wires to that button, I used male header pins, and jumper wires, but you don't need to make your life as difficult.  If you're worried about your pins shorting out like I was, put a bunch of liquid tape on there.  People love liquid tape on their gifts.

IMG_8392.png


Step 5.) Take some photos because it's looking good!

Step 6.) Connect your jumper wires to a Particle Electron, it's an easy to use cellular dev kit that will get our messages securely to the internet, and it takes care of our battery needs.  The wires should look a bit like this:
note: The purple D4 wire should be connected to D3 so we can PWM it.

Step 7.) Grab this code and flash it to your electron in the Particle Online IDE! 
https://github.com/dmiddlecamp/lambda-email/tree/master/heart_firmware
  
  
Setting up the SNS Topic
===

Setting up the Lambda Function
===

Create an IAM Role to Publish to the Topic
===

Setting up the Webhook to trigger the SNS Topic
===

Testing!
===

Making it live!
===
