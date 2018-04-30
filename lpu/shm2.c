#include<stdio.h>
#include<sys/shm.h>

int main()
{
key_t ke;
ke=234;
int size=100;
int buff[100];
int shid=shmget(ke,size,0666);
void *shmd= shmat(shid,NULL,0);
printf("%X",(int)shmd);
printf("message passed %s",(void*)shmd);
}

