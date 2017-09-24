 #include<stdio.h>
 void main()
 {
 int f,l,n,d,i,res=0,t;
 printf("enter the first and last limits:);
 scanf("%d%d",f,l);
 printf("enter the number",n);
 n=t;
 for(i=f;i<=l;i++)
 {
 while(n!=0)
 {
 d=n%10;
 res=res+(d*d*d);
 n=n/10;
 }
 if(t==res)
 {
 printf("the number is armstrong");
 }
 else
 {
 printf("the number is not armstrong");
 }
 }
 }
