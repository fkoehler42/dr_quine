#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#define FILE "Grace_kid.c"
#define STR "#include<stdio.h>%c#include<unistd.h>%c#include<fcntl.h>%c#define FILE %cGrace_kid.c%c%c#define STR %c%s%c%c#define MAIN() int main(){int fd=open(FILE,O_WRONLY|O_CREAT|O_TRUNC,0644);dprintf(fd,STR,10,10,10,34,34,10,34,STR,34,10,10,10,9,10,10,10);close(fd);}%c/*%c%cGrace file comment%c*/%cMAIN()%c"
#define MAIN() int main(){int fd=open(FILE,O_WRONLY|O_CREAT|O_TRUNC,0644);dprintf(fd,STR,10,10,10,34,34,10,34,STR,34,10,10,10,9,10,10,10);close(fd);}
/*
	Grace file comment
*/
MAIN()
