var when = require('when');
var lib = require('./lib.js');


console.log("making the attempt");

	when(lib.send_the_email())
		.then(function(info) {
			console.log("The result was ", info);
			console.log("Success!");
		},
		function(err) {
			console.log("Oh No! ", err);
		});


console.log("waiting on the outcome...");