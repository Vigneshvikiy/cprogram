#include<stdio.h>
void main()
{
int f,l,i;
printf("enter the 2 limits");
scanf("%d%d,&f,&l);
for(i=f;i<=l;i++)
{
if(i%2==1)
{
printf("%d is an odd number");
}
}
}
