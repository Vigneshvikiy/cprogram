#include<stdio.h>
int main()
{
    int n,k,i,a[10],t=0;
    printf("enter the numbers:");
    scanf("%d\t %d\t",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("\t%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[j]==k)
        {
           t++;
        }
    }
    
    if(t>0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
