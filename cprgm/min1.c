#include<stdio.h>
int main()
{
    int a[20]={3,1,6,4,2,8,7,9,64,32};
    int i,min;
    min=a[0];
    for(i=0;i<10;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    printf("minimum number is %d",min);
    return 0;
}
