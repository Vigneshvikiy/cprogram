#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the number:");
    scanf("%d",&n);
    printf("factors are:");
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            if(i%2==1)
        printf("%d\n",i);
        }
    }
    return 0;
}
