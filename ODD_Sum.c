#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,a[n],s=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    if(a[i]%2!=0)
    {
        s=s+a[i];
    }
    }
    printf("%d",s);
    }