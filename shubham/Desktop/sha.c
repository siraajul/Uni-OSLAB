
#include<stdio.h>
#include<fcntl.h>
int main()
{
	int fd;
	fd=open("sha.txt",O_CREAT|O_RDWR,0666);
	int a;
	char buffer[100];
	int bytes;
	a=write(fd,"hello world",50);
	int b;
	b=read(fd,buffer,10);
	printf("the value of b:%d",b);
	close(fd);
}

