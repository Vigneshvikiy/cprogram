#include <stdio.h>
int main(void) {
	char a[20],i;
	printf("enter the string:");
	scanf("%s\n",&a);
	for(i=0;a[i]!='\0';++i);
	{
		printf("total character is %d",i);
	}
	return 0;
}
