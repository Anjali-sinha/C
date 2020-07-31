#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    int arr[n][n],left=0,right=0,ans=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
            if(i==j)
            {
              left+=arr[i][j];
            }
            else if((i+j)==(n-1))
            {
              right+=arr[i][j];
            }
        }
    }
    ans=left-right;
    if(ans<0)
    {
        ans=-(ans);
    }
    printf("%d",ans);
    return 0;
}
