#include<stdio.h>
int main()
{
int h1,m1,h2,m2,hr,mr;
printf("enter the first term:");
scanf("%d\t%d",&h1,&m1);
printf("enter the second term:");
scanf("%d\t%d",&h2,&m2);
hr=h1-h2;
mr=m1-m2;
printf("result is:%d\t%d",hr,mr);
return 0;
}
