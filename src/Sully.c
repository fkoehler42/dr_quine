#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define STR "#include<stdio.h>%c#include<stdlib.h>%c#include<string.h>%c#define STR %c%s%c%cint main(){int i=%d;char bin[64];char src[64];char cmd[1000];if(i<0)return(0);if(!strstr(__FILE__,%cSully.c%c))--i;sprintf(bin,%cSully_%%d%c,i);sprintf(src,%cSully_%%d.c%c,i);%cFILE*fs=fopen(src,%cw%c);fprintf(fs,STR,10,10,10,34,STR,34,10,i,34,34,34,34,34,34,10,34,34,10,34,34,34,34,10);fclose(fs);%csprintf(cmd,%cgcc -Wextra -Werror -Wall %%s -o %%s%c,src,bin);system(cmd);if(i>0){sprintf(cmd,%c./%%s%c,bin);system(cmd);}}%c"
int main(){int i=5;char bin[64];char src[64];char cmd[1000];if(i<0)return(0);if(!strstr(__FILE__,"Sully.c"))--i;sprintf(bin,"Sully_%d",i);sprintf(src,"Sully_%d.c",i);
FILE*fs=fopen(src,"w");fprintf(fs,STR,10,10,10,34,STR,34,10,i,34,34,34,34,34,34,10,34,34,10,34,34,34,34,10);fclose(fs);
sprintf(cmd,"gcc -Wextra -Werror -Wall %s -o %s",src,bin);system(cmd);if(i>0){sprintf(cmd,"./%s",bin);system(cmd);}}
