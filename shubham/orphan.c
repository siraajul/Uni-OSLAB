#include<stdio.h>
#include<unistd.h>
#include <stdlib.h>

int main() {
	pid_t pid;
	pid = fork();
	if(pid == 0) //child
	{
		printf("This is from child %d\n",pid);
		sleep(20);
	}
	else //parent
	{
		 printf("This is from parent %d\n",pid);
		 exit(0);
	}
	return 0;
}
