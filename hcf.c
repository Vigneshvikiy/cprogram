#include<stdio.h>
void main()
{
int a,b,result;
printf("enter any 2 number",a,b);
result=hcf(a,b);
printf("the HCF is=%d",result);
}
int hcf(int a,int b)
{
while(a!=b)
{
if(a>b)
{
a=a-b;
}
else
{
b=b-a;
}
return a;
}
