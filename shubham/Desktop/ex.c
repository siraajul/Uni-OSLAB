#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
printf("before exe\n");
execl("/bin/ps","ps",NULL);
printf("after execl\n");
}
