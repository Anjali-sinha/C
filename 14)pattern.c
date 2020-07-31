#include<stdio.h>
main()
{
    int n,i,j;
    printf("Enter the number:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%2==1)
            {
                printf("%d",i);
            }
            else
                printf("*");
        }
        printf("\n");
    }
    printf("\n\n\n");

}
