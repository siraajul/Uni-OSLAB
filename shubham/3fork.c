#include<stdio.h>
#include<unistd.h>
#include <stdlib.h>

int main() {
	pid_t pid;
	fork();
	fork();
	fork();
	printf("qwerty\n");	
	return 0;
}
