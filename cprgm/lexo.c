#include<stdio.h>
int main()
{
    int i,j,temp,n;
    char a[20];
    printf("enter the number:");
    scanf("%s",&a);
    n=strlen(a);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%c",a[i]);
    }
    return 0;
}
