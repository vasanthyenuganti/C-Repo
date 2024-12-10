#include<stdio.h>
int main()
{
    int m,n,x;
    scanf("%d%d%d",&m,&n,&x);
    int sum=m*2+n*2;
    x=sum*x;
    printf("%d\n",x);
}