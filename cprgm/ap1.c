#include<stdio.h>
int main()
{
    int A,B,C,sum=0,i;
    printf("enter the values:");
    scanf("%d %d %d",&A,&B,&C);
    for(i=A;i<=C;i++)
    {
        sum=sum+B;
        A=A+B;
    }
    printf("sum is %d",sum);
    return 0;
}
