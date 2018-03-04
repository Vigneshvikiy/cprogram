#include<stdio.h>
int main()
{
    char a[10];
    printf("enter the day:");
    scanf("%d",&a);
    if(a[10]=='monday'||a[10]=='tuesday'||a[10]=='wednesday'||a[10]=='thursday'||a[10]=='friday')
    {
        printf("no");
    }
    else
    {
        printf("yes");
    }
    return 0;
}
