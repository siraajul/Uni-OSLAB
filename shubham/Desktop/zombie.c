#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
pid_t p;
p=fork();
if(p>0)
{
sleep(50);
printf("parents");
}
else
{
exit(0);
printf("child process");
}
}

