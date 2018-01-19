#include<stdio.h>
int main()
{
int arr[]={2,5,4,3,7};
int n=sizeof(arr)/sizeof(int);
printf("the median element is %d",arr[n/2]);
return 0;
}
