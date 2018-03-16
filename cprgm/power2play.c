#include <stdio.h>
int main()
{
	int n,r,flag=0;
	printf("enter the number:");
	scanf("%d",&n);
	r=n;
	while(r!=1)
	{
		if(r%2!=0)
		{
			flag=1;
			break;
		}
		r=r/2;
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
