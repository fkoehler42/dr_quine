#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>
#include<fcntl.h>
#define GCC "/usr/bin/gcc"
#define OUT "Sully_"
#define OUT_LEN strlen(OUT)
#define STR "#include<stdio.h>%c#include<unistd.h>%c#include<fcntl.h>%c#define GCC %c/usr/bin/gcc%c%c#define STR %c%s%c%cint main(){int i=%d;char*bin;char*bin;int fd=open(bin,O_WRONLY|O_CREAT|O_TRUNC,0644);dprintf(fd,STR,10,10,10,34,STR,34,10,i-1,34,i-1,34,10);close(fd);%cexecl(GCC,GCC,bin,%c-o%c,bin,NULL);if(i>0)execv(bin,NULL);}%c"
int main(){
	int i=5;char*i_str=itoa(i);char bin[OUT_LEN+strlen(i_str)+1];strcpy(bin, OUT);strcat(bin,i_str);char src[strlen(bin)+3];strcpy(src,bin);strcat(src,".c");
	int fd=open(src,O_WRONLY|O_CREAT|O_TRUNC,0644);
	dprintf(fd,STR,10,10,10,34,34,10,34,STR,34,10,i-1,10,34,34,10);
	close(fd);
	execl(GCC,GCC,src,"-o",bin,NULL);if(i>0)execv(bin,NULL);
}
