const fs = require('fs')
const {execSync} = require('child_process')
const i = 5
const replica = () => {
	const fileName = 'Sully_'+i+'.js'
	const str = 'const fs = require(\'fs\')\nconst {execSync} = require(\'child_process\')\nconst i = '+(i-1)+'\nconst replica = '+replica+'\nreplica()\n'
	fs.writeFile(fileName, str, (err) => {
		if (i>0)execSync('node '+fileName)
	})
}
replica()
