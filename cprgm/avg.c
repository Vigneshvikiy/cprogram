#include <stdio.h>

int main(void) {
	int a[10],i,n,sum=0;
	printf("enter the n value:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		printf("%d\n",a[i]);
	}
	for(i=1;i<=n;i++)
	{
		sum=sum+a[i];
	}
	printf("average is %d",sum/n);
	return 0;
}
