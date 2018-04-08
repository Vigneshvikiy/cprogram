#include <stdio.h>

int main(void){
	int a[10]={5,3,1,2,7};
	int i,j,k,temp;
	scanf("%d",&k);
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("%d",a[k-1]);
	return 0;
}
