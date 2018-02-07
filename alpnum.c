#include<stdio.h>
int main()
{
	char a[50],count=0,count1=0,i;
	printf("enter the string");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
	if((a>='a'&&a<='z')||(a>='A'&&a<='Z'))
	{
		count++;
	}
	if(a>=0&&a<=9)
	{
		count1++;
	}
	}
	if(count>0&&count1>0)
	{
	   printf("yes");	
	}
	else
	{
		printf("no");
	}
	return 0;
}
