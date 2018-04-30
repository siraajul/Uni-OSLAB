#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
pid_t p;
p=fork();
switch(p)
{
case 1:
printf("\n error");
break;
case 0:
printf("\n child c1 is  executing %d",getppid());
fork();
printf("\n child c11 is executing %d",getppid());
printf("\n child c12 is executing %d",getppid());
break;
default:
printf("\n parents executing %d",p);
}
}
