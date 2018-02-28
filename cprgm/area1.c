#include<stdio.h>
int main()
{
    int l,w,h,a,v;
    printf("enter the values:");
    scanf("%d %d %d",&l,&w,&h);
    a=(2*l*w)+(2*w*h)+(2*l*w);
    v=l*w*h;
    printf("%d %d",a,v);
}
