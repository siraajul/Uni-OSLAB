#include<stdio.h>
int main()
{
FILE *wr;
char buffer[20];
sprintf(buffer,"this is syntax");
wr=popen("wc -c","w");
fwrite(buffer,sizeof(char),strlen(buffer),wr);
pclose(wr);
}

