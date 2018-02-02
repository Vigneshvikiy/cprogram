#include<stdio.h>
int main()
{
int f1,f2,f3,i,n;
printf("enter the n value:\n");
scanf("%d",&n);
scanf("%d %d",&f1,&f2);
printf("%d\t%d\t",f1,f2);
for(i=2;i<n;i++)
{
f3=f1+f2;
printf("%d\t",f3);
f1=f2;
f2=f3;
}
retu
