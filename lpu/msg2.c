#include<stdio.h>
#include<sys/msg.h>
int main()
{
key_t ke;
ke=432;
int size=20;
char buff[100];
int msgid=msgget(ke,0666);


int n=msgrcv(msgid,&buff,size,0,IPC_NOWAIT);
printf("%s\n%d",buff,n);
}

