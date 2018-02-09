#include <stdio.h>

int main(void) {
	int a[10]={1,2,3,4,5};
	int i,t=0,k;
	printf("enter the value:\n");
	scanf("%d",&k);
	for(i=0;i<5;i++)
	{
		if(a[i]%2!=0)
		{
			t++;
		}
		if(t==k)
		{
			printf("%d\n",a[i-1]);
		}
	}
	return 0;
}
