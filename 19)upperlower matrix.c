#include<stdio.h>
main()
{
    int n,c=0,d=0,i,j;
    printf("Enter the order of the matrix :\n");
    scanf("%d",&n);
    int a[n][n];
    printf("Enter the elements :\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[i][j]!=0)
            {
                c++;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j>i&&a[i][j]!=0)
            {
                d++;
            }
        }
    }
    if(c==0)
    {
        printf("Upper triangle matrix\n");
    }
    else if(d==0)
    {
        printf("Lower triangle matrix\n");
    }
    else
    {
        printf("None\n");
    }
}
