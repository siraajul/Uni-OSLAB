#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
struct s1{
int a;
int b;
};
void  *th (void *args)
{
struct s1 *arg=args;
printf("hello %d",arg->a);
}
main()
{
pthread_t a;
struct s1 arg;
arg.a=10;
arg.b=20;
printf("hii");
pthread_create(&a,NULL,&th,&arg);
pthread_join(a,NULL);
printf("bye");
}
