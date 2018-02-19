#include<stdio.h>
int main()
{
    int a,b,c,s;
    printf("enter 3 values:");
    scanf("%d %d %d",&a,&b,&c);
    s=(a*b)%c;
    printf("%d",s);
}
