#include <stdio.h>

int main(void) {
    int n,k,i,a[10],count=0;
    printf("enter the number:\n");
    scanf("%d\n%d",&n,&k);
    for(i=1;i<=n;i++)
    {
        printf("the values are:\t");
    	scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
    	if(a[i]==k)
    	{
    	 count++;
    	}
    }
    printf("%d",count);
	return 0;
}
