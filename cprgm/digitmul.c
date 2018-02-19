#include<stdio.h>
int main()
{
    int n,t,mul=1;
    printf("enter the value:");
    scanf("%d",&n);
    while(n!=0)
    {
        t=n%10;
        mul=mul*t;
        n=n/10;
    }
    printf("%d",mul);
}
