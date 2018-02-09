#include <stdio.h>

int main(void) {
	int n,l,m,i,count=0;
	printf("enter n value:\n");
	scanf("%d",&n);
	printf("enter the limits:\n");
	scanf("%d %d",&l,&m);
	for(i=l;i<=m;i++)
	{
		if(n==i)
		{
		count++;	
		}
	}
	if(count>0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
