#include <stdio.h>
 
int main(void) {
	int k,r;
printf("enter the values:\n");
scanf("%d %d",&k,&r);
k=k^r;
r=k^r;
k=k^r;
printf("after swapping %d %d",k,r);
	return 0;
}
