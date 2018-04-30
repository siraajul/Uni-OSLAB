#include<stdio.h>
#include<stdlib.h>
int main()
{
int fd[2];
char buff[15];
pip_t p;
pipe(fd);
p=fork();
if(p>0)
{
close(fd[0]);
printf("this msg is from parent\n %d",getpid());
write(fd[1],"hello child",15);
wait();
}
else
{
close(fd[1]);
int a=read(fd[0],buff,15);
printf("the msg is read by child\n");
write(1,buff,a);
}
}

