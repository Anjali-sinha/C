#include<stdio.h>
main()
{
    int m,n,i,j,k;
    printf("Enter the range that is (m,n):\n");
    scanf("%d%d",&m,&n);
    for(i=m;i<n;i++)
    {
        for(j=2;j<=(i/2);j++)
        {
            k=i%j;
            if(k==0)
            break;
        }
        if(k!=0)
        {
            printf("%d\t",i);
        }
    }
}
