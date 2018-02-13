#include<stdio.h>
int main()
{
    int n,i,sum=0,a[i];
    printf("enter n value:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("sum is %d",sum);
    return 0;
}
