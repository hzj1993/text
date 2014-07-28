#include<stdio.h>

int main()
{
    int n,k,a[100],c=0;
    scanf("%d %d",&n,&k);
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&a[i-1]);
    }
    for(int i=1; i<=n; i++)
    {
        if(a[i-1]>=k)
            c++;
    }
    printf("%d",c);
}
