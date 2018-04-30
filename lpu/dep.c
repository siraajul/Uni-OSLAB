#include<stdio.h>
#include<stdlib.h>
int main()
{
int fd[2];
int a;
pid_t p;
pipe(fd);
p=fork();
if(p>0){
close(fd[0]);
printf("parent sending amsg\n");
write(fd[1],"2",1);
wait();
}
else
{
close(fd[1]);
printf("\n child is reading");
int n=read(fd[0],a,1);
char b;
int c;
printf("%c",a);
c=(2*(int)a);
printf("%d",c);
b=(char)c;
write(1,b,n);
}
}
