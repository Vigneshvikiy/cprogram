#include<stdio.h>
int main()
{
    int arr[50],n,i;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    for(i=0;i<n;i++)
 {
    if(arr[i]>arr[i+1])
    {
        printf("%d",--arr[i+1]);
        break;
    }
 }
 return 0;
}
