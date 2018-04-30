#include<stdio.h>
#include<dirent.h>
int main()
{
DIR *dp;
struct dirent *dptr;
dp=opendir("dir1");
while(NULL!=(dptr=readdir(dp)))
{
printf("%d",dptr->d_type);
}
}
