/*
	JavaScript is sooo easy
*/
function foo(){return 42}
(function main(){
	/*
		Inside the main
	*/
	foo()
	console.log("/*\n\tJavaScript is sooo easy\n*/\n"+foo+"\n("+main+")()")
})()
