#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
void *func1();
void *func2();
int shared=1;
pthread_mutex_tlock;
int main()
{
pthread_mutex_init(&lock,NULL);
pthread_t th1,th2;

pthread_create(&th1,NULL,&func1,NULL);
pthread_create(&th2,NULL,&func2,NULL);

pthread_join(th1,NULL);
pthread_join(th2,NULL);

printf("final value of shared: %d\n",shared);
}
void *func1()
{
int x;
pthread_mutex_lock(&lock);
x=shared;
x++;
sleep(1);
shared=x;
pthread_mutex_unlock(&lock);
}
void *func2()
{
int y;
pthread_mutex_lock(&lock);
y=shared;
y--;
sleep(1);
shared=y;
pthread_mutex_unlock(&lock);
}
