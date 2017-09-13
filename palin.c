#include<stdio.h>
void main()
{
int n,d,t,rev=0;
printf("enter the number:%d",n);
n=t;
while(n!=0)
{
d=n%10;
rev=rev*10+d;
n=n/10;
}
if(t==rev)
{
printf("the number is palindrome");
}
else
{
printf("the number is not palindrome");
}
}
