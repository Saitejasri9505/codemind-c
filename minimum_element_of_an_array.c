#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,a[n],min=9999;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    if(min>a[i])
    {
       min=a[i]; 
    }
    }
    printf("%d",min);
}
