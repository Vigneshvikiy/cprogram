#include<stdio.h>
void main()
{
int n,i,t=0;
printf("enter the number",n);
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{
t++;
}
}
if(t==2)
{
printf("no");
}
else
{
printf("yes");
}
}
