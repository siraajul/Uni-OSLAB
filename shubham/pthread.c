#include<stdio.h>
#include<pthread.h>

void* funFirst()
{
  printf("First Thread Function\n");
}

void* funSecond(void *msg)
{
  printf("%s",(char*)msg);
}
int main()
{
  pthread_t t1,t2,t3;
  char *msg = "Hi\n";
  int a = pthread_create(&t1,NULL,funFirst,NULL);
  int b = pthread_create(&t2,NULL,funSecond,msg);
  pthread_join(t1,NULL);
  pthread_join(t2,NULL);
  return 0;  
}

