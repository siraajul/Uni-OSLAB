#include<pthread.h>
#include<unistd.h>
void *fun1();
void *fun2();
int main()
{
pthread_t th,th1;
int i,j;
pthread_create(&th,NULL,&fun1,NULL);
pthread_create(&th1,NULL,&fun2,NULL);
pthread_join(th,NULL);
pthread_join(th1,NULL);
printf("back to main");
}
void *fun1()
{
for (int i=1;i<100;i++)
{
if(i%2==0)
printf(i);
}
}
void *fun2()
{
for (int j=1;j<100;j++)
{
if (j%2!=0)
printf(j);
}
}

