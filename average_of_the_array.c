#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,a[n];
    float s=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    s=s+a[i];
    }
    {
        s=s/n;
    }
    printf("%0.2f",s);
}