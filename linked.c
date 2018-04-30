#include<stdio.h>
#include<stdlib.h>
int main()
{
int f[50],st,len,j,k,a,c,p,i;
for(i=0;i<50;i++)
f[i]=0;
printf("enter how many blovks already allocated");
scanf("%d",&p);
printf("enter how many blocks allocated");
for(i=0;i<p;i++)
{
scanf("%d",&a);
f[a]=1;
}
x:printf("enter starting block and lenghth");
scanf("%d%d",&st,&len);{
k=len;
if(f[st]=0)
{
for(j=st;j<st+k;j++)
{
if(f[j]==0)
{
f[j]=1;
printf("%d------?%d",j,f[j]);
}
else
{
printf("this block is already aloctaeds");
k++;
}
}
}
else
{
printf("starting block is alread alloacted");
printf("do you want to enter more files");
scanf("%d",&c);
if(c==1)
goto x;
else 
exit(0);
}
