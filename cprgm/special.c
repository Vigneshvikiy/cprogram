#include<stdio.h>
void main()
{
    char a[100],i,count=0;
    printf("enter the string:");
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>'a'&&a[i]<'z'||a[i]>'A'&&a[i]<'Z')
        {
            printf(" ");
        }
        else if(a[i]>'0'&&a[i]<'9')
        {
            printf(" ");
        }
        else
        {
            count++;
        }
    }
    printf("%d",count);
}
