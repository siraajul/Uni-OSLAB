#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<wait.h>
int main()
{
pid_t p1;
p1=fork();
if(p1>0)
{
sleep(10);
for(int j=0;j<100;j++)
{
if(j%2!=0)
{
printf("%d",j);
}
}
}
}

