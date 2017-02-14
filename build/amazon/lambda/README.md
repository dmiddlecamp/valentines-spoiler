
Deploying up the Lambda Function
===

Next lets create a [AWS Lambda function](https://console.aws.amazon.com/lambda/home), triggered off that new SNS Topic: 

![Setting up the Lambda Function](../../../images/Screen Shot 2017-02-11 at 7.16.14 PM.png)


setting environment variables
![Set your Environment Variables](../../../images/Screen Shot 2017-02-12 at 5.13.01 PM.png)


lets increase the timeout a bit as well, just in case the server is slow:
![Increasing Timeout](../../../images/Screen Shot 2017-02-12 at 5.15.05 PM.png)


don't forget to give the role a name
![Setting the role](../../../images/Screen Shot 2017-02-12 at 5.15.22 PM.png)
