#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>
int main()
{
int p,n,m;
char b[100];
n=read(0,b,100);
p=open("check",O_CREAT|O_RDWR,0777);
write(1,"before seek",12);
write(1,b,n);
write(p,b,n);
lseek(p,2,SEEK_SET);
n=read(p,b,100);
write(1,"after seek",13);
write(1,b,m);
}

