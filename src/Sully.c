#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#define GCC "/usr/bin/gcc"
#define OUT_BIN "Sully_%d"
#define OUT_SRC OUT_BIN ".c"
#define STR "#include<stdio.h>%c#include<unistd.h>%c#include<fcntl.h>%c#define GCC %c/usr/bin/gcc%c#define STR %c%s%c%cint main(){int i=%d;char*bin;char*src;int fd=open(bin,O_WRONLY|O_CREAT|O_TRUNC,0644);dprintf(fd,STR,10,10,10,34,STR,34,10,i-1,34,i-1,34,10);close(fd);%cexecl(GCC,GCC,src,%c-o%c,bin,NULL);if(i>0)execv(bin,NULL);}%c"
int main(){
	int i=5;char*bin;char*src;
	asprintf(&bin,OUT_BIN,i);asprintf(&src,OUT_SRC,i);
	int fd=open(src,O_WRONLY|O_CREAT|O_TRUNC,0644);
	dprintf(fd,STR,10,10,10,34,34,10,34,STR,34,10,i-1,10,34,34,10);
	close(fd);
	execl(GCC,GCC,src,"-o",bin,NULL);if(i>0)execv(bin,NULL);
}
