#include<stdio.h>
void main()
{
int f,l,n,i,j,count=0;
printf("enter the first and last limit:");
scanf("%d%d",&n,&n);
printf("enter the number",n);
for(j=f;j<=l;j++)
{
for(i=1;i<=n;i++)
{
if(n%i==0)
{
count++;
}
}
if(count==2)
{
printf("the number is prime");
}
else
{
printf("the number is not prime");
}
}
}
