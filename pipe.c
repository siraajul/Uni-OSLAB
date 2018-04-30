#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
char buffer[30];
FILE *wr;
sprintf(buffer,"this is amessage");
wr=popen("wc -c","w");
fwrite(buffer,sizeof(char),strlen(buffer),wr);
pclose(wr);
}

