// process sync

#include<stdio.h>
#include<pthread.h>

pthread_t t1,t2;
pthread_mutex_t l1;

int count=5;

void *func1()
{
  int b = count;
  pthread_mutex_lock(&l1);
  
  b = b+1;
  sleep(10);
  count = b;
  pthread_mutex_unlock(&l1);
  printf("b in func 1: %d\n",count);
  pthread_exit(b);
}

void *func2()
{
  int b = count;
  pthread_mutex_lock(&l1); //spinlock
  
  b = b-1;
  count = b;
  pthread_mutex_unlock(&l1);
  printf("b in func2: %d\n",count);
  pthread_exit(b);
}

int main()
{
   pthread_create(t1,NULL,func1,NULL);
   pthread_create(t1,NULL,func2,NULL);
   int a;
   int c;
   pthread_join(t1,&a);   
   prinf("value returned by func1: %d\n",a);
   pthread_join(t2,&c);
   printf("value returned by func1: %d\n",c);
}
   
