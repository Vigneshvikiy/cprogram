#include<stdio.h>
int main()
{
char a[50];
int len,i,space=0;
printf("enter the string:");
scanf("%[\n]s",&a);
len=strlen(a);
for(i=0;i<len;i++)
{
if(a[i]==' ')
space=space+1;
}
printf("there are %d space in the string",space);
return 0;
}
