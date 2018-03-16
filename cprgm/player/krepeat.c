#include<stdio.h>
#include<conio.h>
int main()
{
    int n,k,i,j,a[10],c=0;
    clrscr();
    printf("enter the numbers:");
    scanf("%d\t %d\t",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("\t%d",&a[i]);
    }
    for(j=0;j<n;j++)
    {
        if(a[j]==k)
        {
           c++;
        }
    }
    printf("%d",c);
    getch();
    return 0;
}
