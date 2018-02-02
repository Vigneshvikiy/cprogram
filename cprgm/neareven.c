#include<stdio.h>
int main()
{
    int n,t;
    printf("enter the number:\n");
    scanf("%d",&n);
    t=n;
    if(n%2==0)
    {
        printf("%d",t);
    }
    else
    {
        t--;
        printf("%d",t);
    }
    return 0;
}
