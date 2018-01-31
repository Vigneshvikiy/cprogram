#include <stdio.h>

int main(void) {
	int n;
	printf("enter the number:\n");
	scanf("%d",&n);
	do
	{
		n++;
	}while(n==0);
	printf("the number is %d",n);
	return 0;
}
