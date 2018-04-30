#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
void *func1();
struct s1{
int a;
int b;
};
void  *func1 (void *args)
{
struct s1 *arg=args;
int res;
res=(arg->a) * (arg->b);
printf("%d",res);
}
    int main()
{
pthread_t th;
struct s1 arg;
arg.a=10;
arg.b=20;
pthread_create(&th,NULL,&func1,&arg);
pthread_join(th,NULL);
}
