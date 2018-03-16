#include<stdio.h>
int main()
{
    char a[10];
    int n,t,i;
    printf("enter the string:");
    scanf("%s",&a);
    n=strlen(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='0'&&a[i]<='9')
        {
         t++;   
        }
    }
    if(n==t)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
