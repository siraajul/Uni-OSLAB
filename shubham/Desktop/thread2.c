#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
void *th(int *m)
{
printf("hello %d",*m);
}
main()
{
pthread_t a;
int m1=5;
printf("h1");
pthread_create(&a,NULL,&th,&m1);
pthread_join(a,NULL);
printf("bye)");
}
