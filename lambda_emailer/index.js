var when = require('when');
var lib = require('./lib.js');

exports.handler = function(event, context, callback) {
	when(lib.send_the_email())
		.then(function(info) {
			console.log("The result was ", info);
			callback(null, "Success!");
		},
		function(err) {
			callback(err, "Oh no!");
		});
};