#include<stdio.h>
#include<sys/shm.h>

int main()
{
key_t ke;
ke=234;
int size=100;
int buff[100];
int shid=shmget(ke,size,0666|IPC_CREAT);
void *shmd= shmat(shid,NULL,0);
printf("%X",(int)shmd);
printf("message to be sent");
read(0,buff,14);
strcpy(shmd,buff);
printf("you wrote %s",(void*)shmd);
}

