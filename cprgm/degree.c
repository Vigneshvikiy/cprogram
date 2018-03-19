#include<stdio.h>
int main()
{
  int d;
  float a,n,pi=3.14;
  printf("enter the degree:");
  scanf("%d",&d);
  a=pi/180;
  n=sin(d*a);
  printf("% .2f",n);
  return 0;
}
