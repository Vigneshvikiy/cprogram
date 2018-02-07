#include<stdio.h>
int main()
{
int a[50]={1,3,2,4,5,6,7,9,87,12};
int max,i,n;
max=a[0];
for(i=1;i<=10;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
int n=sizeof(a)/sizeof(int);
printf("%d",a[n/2]);
return 0;
}
