#include<stdlib.h>
#include<stdio.h>
#include<fcntl.h>
int main()
{
 int res,n;
 char buffer[100];
 res=open("fifo", O_RDONLY);
 n=read(res, buffer, 100);
 printf("total bytes read: %d \n", n);
 printf("%s was passed to me \n ", buffer);
 printf("process %d finished\n ", getpid());

}

