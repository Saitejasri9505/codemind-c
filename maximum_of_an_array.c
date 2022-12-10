#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,a[n],max=-9999;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    if(max<a[i])
    {
       max=a[i]; 
    }
    }
    printf("%d",max);
}