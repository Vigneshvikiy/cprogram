#include<stdio.h>
int main()
{
    char a[100];
    int i,count=0,count1=0;
    printf("Enter the string:");
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>'a'&&a[i]<'z'||a[i]>'A'&&a[i]<'Z')
        {
            count++;
        }
        else if(a[i]>'0'&&a[i]<'9')
        {
            count1++;
        }
    }
    if(count>0&&count1>0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
