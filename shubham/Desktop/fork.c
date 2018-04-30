#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>
int main()
{
pid_t P;
fork();
fork();
fork();
printf("Hello\n");
}
