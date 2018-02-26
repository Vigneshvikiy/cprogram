#include<stdio.h>
#include<string.h>
void main()
{
    char a[20],*b[20];
    int n;
    printf("Enter the string");
    scanf("%s",&a);
    b=strrev(a);
    n=strcmp(a,b);
    if(n==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
}
