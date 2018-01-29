#include<stdio.h>
int main()
{
char a[50];
int len,i,number=0;
printf("enter the string:");
scanf("%[\n]d",&a);
len=strlen(a);
for(i=0;i<len;i++)
{
if(a>=0&&a<=9)
number=number+1;
}
printf("there are %d numerics",number);
return 0;
}
