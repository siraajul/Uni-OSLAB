#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<pthread.h>
void *thread_function(void *arg);
char message[]="WELCOME TO MY WORLD";
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
}
}
{
int res;
pthread_t a_thread;
void *thread_result;
res=pthread_create(&a_thread,NULL,thread_function,(void*)message);
if(res!=0)
{
perror("thread creation failed");
exit(EXIT_FAILURE);
}
printf("hello world \n");
res=pthread_join(a_thread,&thread_result);
}
