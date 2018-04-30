
#include<stdio.h>
#include<fcntl.h>
#include<dirent.h>
#include<string.h>
int main(int a,char *av[])
{
	int f1,f2,n,err;
	unsigned char buffer[4096];
	char *f1path,f2path;
	if( a !=3)
	{
		printf("wrong argument count.\n");
		exit(1);
	}

	f1path =av[1];
	f2path= av[2];

	f1=Open(f1path,O_RDONLY);
	f2=open(f2path,O_CREAT| O_WRONLY);

	while(1)
	{
		err=read(f1,buffer,4096);
		if(err=-1)
		{
			printf("error file reading.\n\n");
		}
		else
	
	
	}


