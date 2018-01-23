#include<stdio.h>
int main()
{
int f1,f2,f3,i,n;
printf("enter the first 2 values:");
scanf("%d"\t%d\t",&f1,&f2);
for(i=2;i<=n;i++)
{
f3=f1+f2;
printf("%d",f3);
f1=f2;
f2=f3;
}
return 0;
}
