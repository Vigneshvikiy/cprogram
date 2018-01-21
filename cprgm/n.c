#include <stdio.h>
int main(void) {
	int n,a,d,i,sum=1;
	printf("enter the values:\n",n,a,d);
	scanf("%d\t%d\t%d",&n,&a,&d);
	for(i=n;i>1;i--)
	{
		sum=sum+((n-1)*d);
	}
	sum=sum+a;
	printf("ap is %d",sum);
	return 0;
}
