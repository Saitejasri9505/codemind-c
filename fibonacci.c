#include<stdio.h>
int main()
{
    int n,c,i,a=0,b=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=a+b;
        printf("%d ",a);
        a=b;
        b=c;
    }
    
}