#include<stdio.h>
#include<stdlib.h>
int main()

{
int c;
char buffer[50];
int fd[2];
char a;
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
int n=read(fd[0],buffer,1);
c =atoi(buffer);
printf("\n%d",2*c);
printf("\n%d",3*c);
}
}
