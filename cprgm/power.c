#include <stdio.h>

int main(void) {
int n,flag=0,t;
n=t;
while(n!=1)
{
if(n%2!=0)
{
flag=1;
}
n=n/2;
}
if(flag==0)
{
printf("%d is a power of 2",t);
}
else
{
printf("%d is not a power of 2",t);
}
	return 0;
}
