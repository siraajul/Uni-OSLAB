#include<unistd.h>
#include<stdlib.h>

#include<fcntl.h>
int main()
{
int res;
res=open("fifo",O_WRONLY);
write(res,"hello",5);
printf("written",getpid());
}

