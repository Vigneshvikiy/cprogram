#include<stdio.h>
int main()
{
    char a[10],i,t=0;
    printf("enter the name:");
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==a[i+1])
        {
            t++;
        }
    }
    if(t>0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
