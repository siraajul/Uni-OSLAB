#include<stdio.h>
#include<stdlib.h>
void main()
{
int f[50],index[50],i,n,len,j,c,k,p,count=0;
for(i=0;i<50;i++)
{
f[i]=1;
}
x:
printf("enter the index blocks");
scanf("%d",&p);
if(f[p]=1)
{
f[p]=0;
printf("enter no. of files in the index block");
scanf("%d",&n);
}
else
{
printf("\nblock is already allocated");
goto x;
}
for(i=0;i<n;i++)
scanf("%d",&index[i]);
for(i=0;i<n;i++)
if(f[index[i]]==0)
{
printf("\nthe block is already allocated");
goto x;
}
for(j=0;j<0;j++);
f[index[j]]=0;
printf("\nallocated");
printf("\nfile is indexed");
for(k=0;k<n;k++)
printf("\n %d -> %d:%d",p,index[k],f[index[k]]);
printf("press 1 to enter more files and 0 to exit");
scanf("%d",&c);
if(c==1)
goto x;
else
exit(0);
}

