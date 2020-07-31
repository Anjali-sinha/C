#include<stdio.h>
main()
{
    int a[10][10],b[10][10],c[10][10],r1,c1,r2,c2,i,j,k;
    printf("Enter the size of matrix 1:\n");
    scanf("%d%d",&r1,&c1);
    printf("Enter the size of mtarix 2:\n");
    scanf("%d%d",&r2,&c2);
    printf("Enter the elements of matrix 1\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of matrix 2\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            c[i][j]=0;
            for(k=0;k<c1;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("New matrix\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d\t",c[i][j]);

        }
        printf("\n");
    }
}
