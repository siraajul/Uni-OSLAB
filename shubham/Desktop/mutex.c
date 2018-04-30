#include<pthread.h>
#include<stdio.h>
#include<unistd.h>
void *fun1();
void *fun2();
int shared=1;
pthread_mutex_t l;
int main()
{
pthread_mutex_init(&l,NULL);
pthread_t thread1,thread2;
pthread_create(&thread1,NULL,fun1,NULL);
pthread_create(&thread2,NULL,fun2,NULL);
pthread_join(thread1,NULL);
pthread_join(thread2,NULL);
printf("Value of shared is %d",shared);
}
void *fun1()
{
int x;
pthread_mutex_lock(&l);
x=shared;
x++;
sleep(1);
shared=x;
pthread_mutex_unlock(&l);
}
void *fun2()
{
int y;
pthread_mutex_lock(&l);
y=shared;
y--;
sleep(1);
shared=y;
pthread_mutex_unlock(&l);
}

