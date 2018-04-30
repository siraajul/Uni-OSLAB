#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>
int main()
{
int res;
res=mkfifo("fifo",0777);
printf("pipe created");
}

