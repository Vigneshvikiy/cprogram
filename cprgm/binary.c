#include <stdio.h>
#include<string.h>

int main(void) {
	char a[100];
	int n,i,t=0;
	printf("enter the string:\n");
	scanf("%s",&a);
	n=strlen(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='0'||a[i]=='1')
		{
			t++;
		}
	}
	if(n==t)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
