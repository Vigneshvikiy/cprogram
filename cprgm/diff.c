#include<stdio.h>
int main()
{
    int n,i,f,s,d;
    printf("Enter howmany rows:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&f,&s);
        printf("%d\t%d\n",f,s);
        d=f-s;
        printf("difference is %d",d);
    }
    return 0;
}
