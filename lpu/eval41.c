
#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include<string.h>
int main()
{
 FILE *rd;
 char buffer[50];
 rd=popen("ls", "r");
 fread(buffer, 1, 50, rd);

 printf("%s\n", buffer);
 pclose(rd);
}
