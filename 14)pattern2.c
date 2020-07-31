#include<stdio.h>
main()
{
    int n,i,j;
    printf("Enter the number:\n");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        for(j=i;j>0;j--)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    printf("\n\n\n");
}
