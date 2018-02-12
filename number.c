#include<stdio.h>
#include<string.h>
int main()
{
    char a[50];
    int l,i;
    printf("Enter the string:");
    scanf("%s",&a);
    l=strlen(a);
    for(i=0;a[i]!=l;i++)
    {
        if(a[i]>'0'&&a[i]<'9')
        {
         printf("%c",a[i]);   
        }
    }
    return 0;
}
