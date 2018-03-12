#include<stdio.h>
#include<string.h>
int main()
{
    char a[10];
    int i,t,l;
    printf("enter the string:");
    scanf("%s",&a);
    l=strlen(a);
    if(l%2==0)
    {
    for(i=0;i<l;i=i+2)
    {
        t=a[i];
        a[i]=a[i+1];
        a[i+1]=t;
    }
    }
    else
    {
        for(i=0;i<l;i=i+3)
        {
            t=a[i];
            a[i]=a[i+1];
            a[i+1]=t;
        }
    }
    printf("%s",a);
   return 0;
}
