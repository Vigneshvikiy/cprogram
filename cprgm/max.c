#include<stdio.h>
int main()
{
int a[20]={6,5,7,4,3,7,2,9,18,21},i,max;
max=a[0];
for(i=0;i<=10;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
printf("largest number is %d",max);
return 0;
}
