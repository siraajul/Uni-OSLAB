#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
#include<sys/shm.h>
int main()
{
int i;
void *shared_memory;
char buff[100];
int shmid;
shmid=shmget((key_t)2345,1000,0666|IPC_CREAT);
printf("key of shared memory is %d\n",shmid);
shared_memory=shmat(shmid,NULL,0);
printf("process attached at %X\n",(int)shared_memory);
printf("Enter some data  to write to shared memory\n");
read(0,buff,100);
strcpy(shared_memory,buff);
printf("you wrote:%s\n",shared_memory);
}

