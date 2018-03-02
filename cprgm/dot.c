#include<stdio.h>
#include<string.h>
int main()
{
    char a[10];
    int n;
    printf("enter the name:");
    scanf("%s",&a);
    n=strlen(a);
    a[n]='.';
    printf("%s",a);
    return 0;
}
