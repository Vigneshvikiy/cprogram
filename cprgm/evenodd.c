#include <stdio.h>

int main(void) {
	int a,b,p;
printf("enter the number:\n");
scanf("%d %d",&a,&b);
p=a*b;
if(p%2==0)
{
printf("even");
}
else
{
printf("odd");
}
	return 0;
}
