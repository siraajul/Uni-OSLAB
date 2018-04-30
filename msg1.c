#include<stdio.h>
#include<sys/msg.h>
int main()
{
key_t ke;
ke=432;
int size=20;
char buff[100];
int msgid=msgget(ke,0666|IPC_CREAT);
printf("enter the msg");
fgets(buff,size,stdin);
msgsnd(msgid,&buff,size,0);
}

