#include<stdio.h>
#include<unistd.h>

int main() {
	pid_t pid;
	printf("1.This is the parents id %d\n",getpid()); //getpid() fetches the PID of the current running process
	pid = fork(); //creates a new process (child process)
	//wait();
	printf("2.This is the PID %d and parent PPID %d\n",pid,getppid()); //getppid will return the parent PID
	printf("3.This is the PID %d and parent PPID %d\n",pid,getppid());
	return 0;
	}
