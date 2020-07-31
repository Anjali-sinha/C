#include<stdio.h>
main()
{
    int n;
    printf("Enter a number n:\n");
    scanf("%d",&n);
    if(n==0)
    {
        printf("The number is zero\n");
    }
    else if(n>0)
    {
        printf("The number is positive\n");
    }
    else
    {
        printf("The number is negative\n");
    }
}
