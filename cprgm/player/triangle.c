#include<stdio.h>
int main()
{
 int a,b,c,s;
 printf("enter 3 values:");
 scanf("%d %d %d",&a,&b,&c);
 s=a+b+c;
 if(s==180)
 {
   printf("yes");
 }
 else
 {
   printf("no");
 }
 return 0;
}
