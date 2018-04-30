#include<stdio.h>
#include<fcntl.h>
#include<sys/types.h>
int main()
{
int n;
char buff[50];
n=read(0,buff,50);
fd=open("exam2",O_CREATE|O_RDWR,0777);
write(fd,buff,50);
}





