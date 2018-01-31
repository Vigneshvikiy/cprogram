#include<stdio.h>
int main()
{
char a[10];
int n,i;
printf("enter the string:\n");
scanf("%s",&a);
printf("enter the number:\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("%s\n",a);
}
return 0;
}
