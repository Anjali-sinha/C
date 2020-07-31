#include<stdio.h>
int main()
{
    int n,m,counta=0,countb=0,count=0,i,j,x;
    scanf("%d %d",&n,&m);
    int a[n],b[m];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<m;j++)
    {
        scanf("%d",&b[j]);
    }
    for(x=0;x<100;x++)
    {
        for(i=0;i<n;i++)
        {
            if(x%a[i]==0)
            {
                counta++;
            }
        }
        for(j=0;j<m;j++)
        {
            if(b[j]%x==0)
            {
                countb++;
            }
        }
        if((counta==n)&&(countb==m))
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
