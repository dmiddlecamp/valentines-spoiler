var email = {
	transport: {
		// Alternatively you can use your gmail account!
		//		service: "Gmail",
		//		auth: {
		//			user: process.env.email_address,
		//			pass: process.env.email_password
		//		}

		host: process.env.smtp_host_address,
		secure: true,
		auth: {
			user: process.env.email_address,
			pass: process.env.email_password
		}
	},
	envelope: {
		from: process.env.email_address,
		to: process.env.order_email_address,
		subject: "IoT Email Order for Spoil (2nd try)",
		text: "" +
			"**Begin Email Order for Spoil** \n" +

			"recipient_name: __RECIPIENT_NAME__,  \n" +
			"recipient_phone: __RECIPIENT_PHONE_  \n""
			"recipient_address1: __ADDRESS_LINE1__  \n" +
			"recipient_address2: __ADDRESS_LINE2__  \n" +
			"recipient_address3: __ADDRESS_LINE3__  \n" +

			"item: __ITEM__  \n" +
			"note: __NOTE__  \n" +

			"sender_phone: __SENDER_PHONE__  \n" +
			"sender_paypal: __SENDER_PAYPAL_EMAIL__  \n"
	}
};
module.exports = email;
