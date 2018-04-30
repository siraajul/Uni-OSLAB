#include<pthread.h>
#include<unistd.h>
#include<stdio.h>
int shared=1;
void *fun1();
void *fun2();
int main()
{
pthread_t t1,t2;
pthread_create(&t1,NULL,&fun1,NULL);
pthread_create(&t2,NULL,&fun2,NULL);
pthread_join(t1,NULL);

pthread_join(t2,NULL);
printf("%d shared value is",shared);

}
void *fun1()
{
int x;
x=shared;
x=x+1;
sleep(1);
shared=x;
}
void *fun2()
{
int y;
y=shared;
y=y-1;
sleep(1);
shared=y;
}

