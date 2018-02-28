#include<stdio.h>
int main()
{
    char a[10];
    int i,j,t=0;
    printf("enter the string:");
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
    {
        for(j=i+1;a[j]!='\0';j++)
        {
            if(a[i]==a[j])
            {
                t++;
            }
        }
    }
    if(t==0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
