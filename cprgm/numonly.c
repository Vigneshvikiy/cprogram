#include<stdio.h>
int main()
{
    char a[50];
    printf("enter the string:");
    scanf("%s",&a);
    int l,i;
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]>='0'&&a[i]<='9')
        {
            printf("%c",a[i]);
        }
    }
    return 0;
}
