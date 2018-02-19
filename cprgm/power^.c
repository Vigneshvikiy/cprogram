#include<stdio.h>
int main()
{
    int n,k,res=1;
    printf("enter the number:");
    scanf("%d %d",&n,&k);
    while(k!=0)
    {
     res=res*n;
     k--;
    }
    printf("%d",res);
    return 0;
}
