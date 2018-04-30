#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>
int main()
{
int n,fp;
char a[100];
n=read(0,a,100);
fp=open("file",O_CREAT|O_RDWR,0777);
write(fp,a,100);
}
