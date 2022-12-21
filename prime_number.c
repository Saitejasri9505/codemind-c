#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d%d",&n,&i);
    for(i=2;i<=n/2;i++)
    {
    if(n%i==0)
    {
        c++;
    }
}
if(c==2)
    {
        printf("not a prime");
    }
    else
    {
        printf("prime");
    }
}