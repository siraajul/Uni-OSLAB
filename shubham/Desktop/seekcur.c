#include<fcntl.h>
#include<sys/types.h>
int main()
{
int fd;
char buff[50];
fd=open("f30",O_RDONLY);
int n=read(fd,buff,20);
write(1,buff,n);
lseek(fd,5,SEEK_CUR);
int m=read(fd,buff,16);
write(1,buff,m);
lseek(fd,9,SEEK_CUR);

}

