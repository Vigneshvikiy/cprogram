#include<stdio.h>
int main()
{
int i=30;
int k=60;
printf("the values are %d %d",i,k);
i=i^k;
k=i^k;
i=i^k;
printf("after swapping numbers are %d %d",i,k);
return 0;
}
