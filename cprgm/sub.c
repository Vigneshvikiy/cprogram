#include <stdio.h>
 
int main(void) {
	int a,b,s;
    printf("enter the number:\n");
    scanf("%d %d",&a,&b);
    s=a-b;
    if(s%2==0)
    {
    	printf("yes");
    }
    else
    {
    	printf("no");
    }
	return 0;
}
 
