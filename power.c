#include<stdio.h>
void main()
{
int b,exp;
long long result;
printf("enter the base ana exponential value");
scanf(%d%d,&b,&exp);
while(exp!=0)
{
result*=b;
--exp;
}
printf("answer is %lld",result);
}
