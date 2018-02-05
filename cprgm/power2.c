#include <stdio.h>

int main(void) {
	int n,t,flag=0;
	printf("enter the number:\n");
	scanf("%d",&n);
	t=n;
	while(t!=1)
	{
		if(t%2!=0)
		{
			flag=1;
			break;
		}
		t=t/2;
	}
	if(flag==0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
