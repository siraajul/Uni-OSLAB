#include<stdio.h>
#include<unistd.h>
#define max 3
int main()
{
	pid_t pid;
	pid= fork();
	if(pid==0)
	{
		printf("Child P2 id= %d \n",getpid());
		printf("Child of P2 with Id= %d\n",getpid());
	}
	
	else
	{
		printf("Parent Id= %d\n",getpid());
	}
	
}


