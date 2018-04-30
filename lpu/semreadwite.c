#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
#include<semaphore.h>
void *reader();
void*writer();
int f[100],n;
sem_t s;
int main()
{
                          sem_int(&s,0,1`);
                          pthread_t thread1,thread2;
                          pthread_create(&thread1,NULL,reader,NULL);
                          pthread_create(&thread2,NULL,writer,NULL);
                          pthread_join(thread1,NULL);
                          pthread_join(thread2,NULL);
}
void *reader()
{
           sem_wait(&s);
           printf("enter number of elements in ana array");
           scanf("%d",&n);
for(int i=0;i<n;i++)
{
scanf("%d",&f[i]);
sleep(1);
}
void *writer()
{
                    sem_wait(&s);
                    printf("enter no of elements in array");
                    scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("%d",&f[i]);


