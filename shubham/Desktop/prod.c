#include<stdio.h>
#include<semaphore.h>
#include<pthread.h>
#define size 10
//pthread_mutex_t mutex;
pthread_t tidP[20],tidC[20];
sem_t full,empty,mutex,e;
int counter=0;
int buffer[size];

void initialize()
{
	
	counter=0;
}

void write(int item)
{
	buffer[counter++]=item;
}

int read()
{
	
	return(buffer[--counter]);
}

void * producer (void *param)
{
	int item,i;
	item=rand()%5; //
	sem_wait(&empty);
	sem_wait(&mutex);
	printf("\nProducer has produced item: %d\n",item);
	write(item);
	sem_post(&mutex);
	sem_post(&full);
}

void * consumer (void * param)
{
	int item;
	sem_wait(&full);
	sem_wait(&mutex);
	item=read();
	printf("\nConsumer has consumed item: %d\n",item);
	sem_post(&mutex);
	sem_post(&empty);
}

int main()
{
	int n1=1,n2=2,i;
	sem_init(&mutex,0,1);
  sem_init(&full,1,0);
  sem_init(&empty,1,n1);
  sem_init(&e,1,0);
	for(i=0;i<n1;i++)
		pthread_create(&tidP[i],NULL,producer,NULL);
		
	for(i=0;i<n2;i++){
		pthread_create(&tidC[i],NULL,consumer,NULL);
	}
	for(i=0;i<n1;i++)
		pthread_join(tidP[i],NULL);
		
	for(i=0;i<n2;i++)
		pthread_join(tidC[i],NULL);
}
