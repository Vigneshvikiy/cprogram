#include<stdio.h>
int main()
{
    int f,l,c=0,i,j,p;
    printf("enter the limit:");
    scanf("%d %d",&f,&l);
    for(i=f;i<=l;i++)
    {
        p=i*i;
       for(j=1;j<=l;j++)
       {
           if((i*j==p)&&(p<=l))
           {
               c++;
               break;
           }
       }
    }
    printf("%d",c);
    return 0;
}
