#include<pthread.h>
#include<stdio.h>
#include<unistd.h>
void *func();
struct s
{
int x,y;
};
void *func1(void *args)
{
struct s *arg=args;
int result;
result=(arg->x) + (arg->y);
printf("%d",result);
}
int main()
{
pthread_t th;
struct s arg;
printf("enter first number: ");
scanf("%d",&arg.x);
printf("enter second number:");
scanf("%d",&arg.y);
pthread_create(&th,NULL,&func1,&arg);

pthread_join(th,NULL);
}

