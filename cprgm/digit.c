#include <stdio.h>

int main(void) {
	int n,sum=0;
	printf("enter the value:\n");
	scanf("%d",&n);
	while(n!=0)
	{
		n=n/10;
		sum=sum+1;
	}
	printf("the total digits are:%d",sum);
	return 0;
}
