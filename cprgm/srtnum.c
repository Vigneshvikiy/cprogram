#include<stdio.h>
int main()
{
char a[10];
int n,i;
printf("enter the string:");
scanf("%s",&a);
printf("enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("%s",a);
}
return 0;
}
