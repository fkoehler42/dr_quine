#include<stdio.h>
/*
	This is a very useful comment
*/
int foo(){return(42);}
int main(){
/*
	I'm inside the main
*/
	char*str="#include<stdio.h>%c/*%c%cThis is a very useful comment%c*/%cint foo(){return(42);}%cint main(){%c/*%c%cI'm inside the main%c*/%c%cchar*str=%c%s%c;%c%cfoo();%c%cprintf(str,10,10,9,10,10,10,10,10,9,10,10,9,34,str,34,10,9,10,9,10,10);%c}%c";
	foo();
	printf(str,10,10,9,10,10,10,10,10,9,10,10,9,34,str,34,10,9,10,9,10,10);
}
