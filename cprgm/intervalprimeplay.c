#include<stdio.h>
int main()
{
    int f,l,c,t=0,i,j;
    printf("enter the limit:");
    scanf("%d %d",&f,&l);
    for(i=f;i<=l;i++)
    {
        c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
            c++;
            }
        }
        if(c==2)
        {
            t++;
        }
    }
printf("%d prime number",t);
return 0;
}
