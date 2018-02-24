#include<stdio.h>
int main()
{
    int a,b,x,y,t,lcm;
    printf("enter 2 values:");
    scanf("%d %d",&a,&b);
    x=a;y=b;
    while(y!=0)
    {
        t=y;
        y=x%y;
        x=t;
    }
    lcm=(a*b)/x;
    printf("Lcm is %d",lcm);
    return 0;
}
