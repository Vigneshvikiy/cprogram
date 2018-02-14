#include<stdio.h>
int main()
{
    int t;
    printf("enter the temperature:");
    scanf("%d",&t);
    t=t+273;
    printf("in kelvin:%d",t);
    return 0;
}
