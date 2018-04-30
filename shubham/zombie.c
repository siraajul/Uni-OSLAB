#include<stdio.h>
#include<unistd.h>
#include <stdlib.h>

int main() {
	pid_t pid;
	pid = fork();
	if(pid>0) //parent
	{
		printf("This is from parent %d\n",pid);
		sleep(10);
	}
	else //child
	{
		printf("This is from child %d\n",pid);
		exit(0);
	}
	return 0;
}
