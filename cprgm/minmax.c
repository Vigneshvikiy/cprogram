#include <stdio.h>
 
int main(void) {
	int a[10],i,j,temp,n;
	printf("enter the number:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	for(i=0;i<n;i++)
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
	printf("sorted array is:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("the min number is %d",a[0]);
	printf("the max number is %d",a[n-1]);
	return 0;
}
