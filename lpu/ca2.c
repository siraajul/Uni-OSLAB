#include<pthread.h>
#include<stdio.h>
void *th_function1();
void *th_function2();
int shared=5;
int main()
{
pthread_t thread1,thread2;
pthread_create(&thread1,NULL,th_function1,NULL);
pthread_create(&thread2,NULL,th_function2,NULL);
pthread_join(thread1,NULL);
pthread_join(thread2,NULL);
printf("value of shared %d\n",shared);
}
void *th_function1()
{
int x;
x=shared;
x++;
sleep(1);
shared=x;
}
void *th_function2()
{
int y;
y=shared;
y--;
sleep(1);
shared=y;
}

