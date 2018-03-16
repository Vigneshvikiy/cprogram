#include<stdio.h>
int main()
{
    int n,k,i,a[10],c=0;
    printf("enter the numbers:");
    scanf("%d\t %d\t",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
           ++c;
        }
    }
    if(c>0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
