#include <stdio.h>

int main(void) {
	int n,d,t,rev=0;
	printf("enter the number:\n");
	scanf("%d",&n);
	while(n!=0)
	{
		d=n%10;
		rev=(rev*10)+d;
		n=n/10;
	}
	while(rev!=0)
	{
		t=rev%10;
		printf("%d\t",t);
		rev=rev/10;
	}
	return 0;
}
