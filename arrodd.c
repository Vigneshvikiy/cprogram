#include<stdio.h>
int main()
{
    int a[10]={1,2,3,4,5};
    int i,k,t=0;
    printf("enter");
    scanf("%d",&k);
    for(i=0;i<5;i++)
    {
        if(a[i]%2!=0)
        {
            t++;
        }
        if(t==k)
        {
            printf("%d",a[i]);
        }
    }
    return 0;
}
