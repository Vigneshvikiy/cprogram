#include<stdio.h>
int main()
{
    int arr[10]={1,2,3,4,1,5,3,2,5,2},i,j,c,t;
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
        if(c==0)
        {
           printf("%d",arr[i]);
        }
    }
    return 0;
}
