#include <stdio.h>

int main(void) {
	int n,d,sum=0;
printf("enter the number:\n");
scanf("%d",&n);
while(n!=0)
{
d=n%10;
sum=sum+d;
n=n/10;
}
printf("the sum is %d",sum);
	return 0;
}
