#include<stdio.h>
int main()
{
    int n,k,i,a[20];
    printf("enter 2 values:");
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            printf("%d",a[i]);
        }
    }
    return 0;
}
