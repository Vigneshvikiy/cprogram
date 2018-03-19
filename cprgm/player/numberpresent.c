#include<stdio.h>
int main()
{
  int n,k,t,c=0;
  printf("enter values:");
  scanf("%d %d",&n,&k);
  while(n!=0)
  {
    t=n%10;
    if(t==k)
    {
      c++;
    }
    n=n/10;
  }
  if(c>0)
  {
    printf("yes");
  }
  return 0;
}
