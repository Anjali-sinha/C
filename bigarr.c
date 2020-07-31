#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    int i;
    int sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%lli",&ar[i]);
        sum+=ar[i];
    }
    printf("%lli\n",sum);
    return 0;
}
