#include<stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5,6,7,2,8,9},i,j,c,t;
    for(i=0;i<10;i++)
    {
        c=0;
        for(j=0;j<=10;j++)
        {
            if(arr[i]==arr[j]&&i!=j)
            {
                c++;
            }
        }
        if(c>0)
        {
            t=arr[i];
        }
    }
    printf("%d",t);
    return 0;
}
