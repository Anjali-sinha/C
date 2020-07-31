#include<stdio.h>
main()
{
    int r,c,i,j,a[10][10],csum=0,rsum=0,dsum=0,tsum=0;
    printf("Enter the number of rows and columns :\n");
    scanf("%d%d",&r,&c);
    printf("Enter the elements :\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        rsum=0;
        for(j=0;j<c;j++)
        {
            rsum+=a[i][j];
        }
        printf("Sum of %d row is :%d\n",i+1,rsum);
    }
    for(j=0;j<c;j++)
    {
        csum=0;
        for(i=0;i<r;i++)
        {
            csum+=a[i][j];
        }
        printf("Sum of %d column is :%d\n",j+1,csum);
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==j)
            {
               dsum+=a[i][j];
            }
        }
    }
    printf("Sum of diagonal elements is :%d\n",dsum);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            tsum+=a[i][j];
        }
    }
    printf("Sum of all the elements :%d\n",tsum);
}
