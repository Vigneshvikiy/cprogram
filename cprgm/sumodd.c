#include <stdio.h>

int main(void) {
	int a,b,s;
printf("enter the values:\n");
scanf("%d %d",&a,&b);
s=a+b;
if(s%2==0)
{
printf("even");
}
else
{
printf("odd");
}
	return 0;
}
