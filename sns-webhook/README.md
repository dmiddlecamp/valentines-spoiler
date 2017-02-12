Setting up the webhook to Amazon SNS
---

Grab the Topic ARN from the Topic Details page, it should look like this:
 
```
    arn:aws:sns:us-east-1:123456789012:spoil-topic
```

and paste that into the example.json.  Next you'll want to make sure your URL matches the region where you have SNS 
deployed.  Notice how it matches the us-east region.  Grab your endpoint from the Amazon SNS Gateway Endpoint list here:
http://docs.aws.amazon.com/general/latest/gr/rande.html#sns_region

```
    http://sns.us-east-1.amazonaws.com/
```

Next you'll need some credentials to access sns. Go to Amazon's IAM setup, and create a role that only has write 
permissions to this SNS Topic.  Make sure you enable programmatic access, and grab that accessKeyId, 
and secretAccessKey.

Add it all to your example.json, and create your webhook either in the [Particle Console](https://console.particle
.io) or with the [Particle command line tool](https://github.com/spark/particle-cli)!

```
    particle webhook create example.json
```

Test to make sure your hook triggers the SNS topic by publishing the event right from the command line:

```
    particle publish trigger_spoil_email
```

Note!  Please make sure your lambda function has your own email address set as the recipient when doing these tests, 
so we don't accidentally spam Spoil with invalid orders.  Thanks! :) 

