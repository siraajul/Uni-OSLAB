#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
pid_t p;
p=fork();
if(p==0)
{
printf("childprocess %d ,pp%d",getpid(),getppid());
pid_t p1;
p1=fork();
 if(p1==0)
{

printf("cp %d",getpid());
printf("ppp%d",getppid());
}
}
}


