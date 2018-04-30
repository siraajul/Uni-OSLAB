#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()

{
 pid_t p;
 p=fork();
 if(p==0)
{
 excelp("\bin\ps" ,"ps", NULL)
 printf("child process is executing");
}
else if (p>0)
{
 wait(NULL);
 printf("parent is executing");
}
else
{
 printf("fork is failed");
}
}
