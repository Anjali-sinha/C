#include<stdio.h>
int main()
{
    int n,max=0,ans=0;
    scanf("%d",&n);
    int ar[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        if(ar[i]>max)
        {
            max=ar[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(max==ar[i])
        {
            ans+=1;
        }
    }
    printf("%d",ans);
    return 0;
}
