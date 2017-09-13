#include<stdio.h>
void main()
{
int n,d,sum=0;
printf("enter the number",n);
while(n!=0)
{
d=n%10;
sum=sum+d;
n=n/10;
}
printf("the sum is:%d",sum);
}
