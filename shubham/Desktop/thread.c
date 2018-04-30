#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<pthread.h>
void *thread_function(void *arg);
char message[]="WELCOME TO MY WORLD";
int main()
{
int res;
pthread_t a_thread;
void *thread_result;
res=pthread_create(&a_thread,NULL,
thread_function,(void*)message);
if(res!=0)
{
perror("thread creation failed");
exit(EXIT_FAILURE);
}
printf("waiting for thread to finish\n");
res=pthread_join(a_thread,&thread_result);
if(res!=0)
{
perror("thread joined failed");
exit(EXIT_FAILURE);
}
printf("thread joined,it returned%s\n",(char*)thread_result);
printf("message is now%s\n",message);
exit(EXIT_FAILURE);
}
void *thread_function(void *arg)
{
printf("thread f_function is running.argument was%s\n",(char*)arg);
sleep(3);
strcpy(message,"BYE");
pthread_exit("thankyou for the cpu time");
} 
