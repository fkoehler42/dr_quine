const fs=require('fs');const{execSync}=require('child_process');let i=5
const replica= () => {
	if(i<0)return;if(__filename.indexOf('Sully.js')<0)--i;const fileName='Sully_'+i+'.js';const str='const fs=require(\'fs\');const{execSync}=require(\'child_process\');let i='+i+'\nconst replica= '+replica+'\nreplica()\n'
	fs.writeFile(fileName, str, (err) => {
		if(i>0)execSync('node '+fileName)
	})
}
replica()
