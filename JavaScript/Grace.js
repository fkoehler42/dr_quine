const fs = require('fs')
const FILE_NAME = 'Grace_kid.js';
(function (){
	/*
		Preprocessor directives don't exist on JS...
	*/
	const str = 'const fs = require(\'fs\')\nconst FILE_NAME = \''+FILE_NAME+'\';\n('+arguments.callee+')()\n'
	fs.writeFileSync(FILE_NAME, str)
})()
