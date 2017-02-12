Lambda Emailer
---

Don't forget to open up email.js, and edit the email body to match your recipients info!  Spoil needs their address,
 phone number, and what gift you're sending, as well as your paypal account information and more!

Please test your settings by setting yourself as the recipient, and triggering it a few times using self_test.js to 
make sure the email has all the right information!  Play around by switching the items you're sending, 
or randomizing it, etc.


Getting Started
---

Don't forget to NPM install the dependencies!

```
    npm install
```


Deploying to Lambda
---

After you've finished installing dependencies, editing your order email, and self-testing with your own account, 
zip up this folder with the node_modules included, and upload to [AWS Lambda](https://console.aws.amazon.com/lambda/home).


Lambda Environment variables
---

Make sure you set these environment variables on your lambda function or it won't work!

email_address: "your_email_address"
email_password: "your_email_password"
order_email_address: "particle@spoil.co"
smtp_host_address: "smtp.your_server.com"


Special Thanks To:
---

Thanks [Spoil](https://Spoil.co) !

