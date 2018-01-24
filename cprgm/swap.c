#include <stdio.h>
int main(void) {
	int a,b;
	scanf("%d\t%d",&a,&b);
	printf("before swapping values are %d %d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swapping values are %d %d",a,b);
	return 0;
}
