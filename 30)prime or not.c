#include<stdio.h>
main()
{
    int i,n,a=0;
    printf("Enter a number n:");
    scanf("%d",&n);
    for(i=2;i<=(n/2);i++)
    {
        if(n%i==0)
            ++a;
    }
    if(a==0)
    {
        printf("%d is prime number\n",n);
    }
    else
    {
        printf("%d is not a prime number\n",n);
    }
}
