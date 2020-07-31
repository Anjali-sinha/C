#include<stdio.h>
int main()
{
    int n;
    int ar[n];
    int i;
    int sum=0;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        scanf("&lli\n",&ar[i]);
        sum+=ar[i];
    }
    printf("%lli\n",sum);
    return 0;
}
