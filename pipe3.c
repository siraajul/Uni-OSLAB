#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
int main()
{
int fd[2],n;
char buff[100];
pid_t P;
pipe(fd);
P=fork();
if(P>0)
{
close(fd[0]);
printf("passing value to child");
write(fd[1],"hello",5);
wait();
}
else
{
close(fd[0]);
n=read(fd[0],buffer,100);
write(1,buff,n);
}
}
