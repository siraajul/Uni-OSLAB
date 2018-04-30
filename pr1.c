#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>

int main()
{
FILE *r1,*w1;
char b[20];
r1=popen("ls","r");
fread(b,1,20,r1);
w1=popen("wc -l","w");
fwrite(b,sizeof(char),strlen(b),w1);
pclose(r1);
pclose(w1);
}
