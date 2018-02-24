#include<stdio.h>
int main()
{
    int a,b,x,y,t,gcd;
    printf("enter 2 values:");
    scanf("%d %d",&a,&b);
    x=a;y=b;
    while(y!=0)
    {
        t=y;
        y=x%y;
        x=t;
    }
    gcd=x;
    printf("GCD is %d",gcd);
    return 0;
}
