#include<stdio.h>
main()
{
    int n,oint,reint=0,remai;
    printf("Enter a number\n");
    scanf("%d",&n);
    oint=n;
    while(n!=0)
    {
        remai=n%10;
        reint=reint*10+remai;
        n/=10;
    }
    if(oint==reint)
    {
        printf("It's a palindrome\n");
    }
    else
    {
        printf("It's not a palindrome\n");
    }
}
