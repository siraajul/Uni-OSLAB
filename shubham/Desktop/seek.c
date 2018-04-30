#include<stdio.h>
#include<fcntl.h>
#include<sys/types.h>
int main()
{
int fd;
char buff[50];
fd=open("f1",O_RDWR);
lseek(fd,5,SEEK_END);
int n=read(fd,buff,5);
write(1,buff,n);
}
