#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>
int main()
{
pid_t P;
P=fork();
switch(P)
{
case1:
printf("error");
break;
case0:
printf("child executing");
printf("iam child my id is:%d\n",getpid());
printf("my parents id is:%d\n",getppid());
break;
default:
printf("parentrs executing");
printf("iam parent having id:%d\n",getpid());
printf("my child id is:%d\n",P);
}
}

