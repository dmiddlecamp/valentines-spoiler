var when = require('when');
var nodemailer = require('nodemailer');
var email_config = require('./email.js');


module.exports = {
	send_the_email: function() {
		var dfd = when.defer();
		try {
			var transporter = nodemailer.createTransport(email_config.transport);
			transporter.sendMail(email_config.envelope, function(error, info) {
				if (error) {
					return dfd.reject(error);
				}
				else {
					return dfd.resolve(info);
				}
			});
		}
		catch (ex) {
			dfd.reject("failed to send email, " + ex);
		}
		return dfd.promise;
	},

	_: null
};
