#include<stdio.h>
int factorial(int);
main()
{
    int num,result;
    printf("Enter the number :\n");
    scanf("%d",&num);
    if(num<0)
    {
        printf("It is not possible\n");
    }
    else
    {
        result=factorial(num);
        printf("The factorial of %d is: %d\n",num,result);
    }
}
int factorial(int num)
{
    if(num==0||num==1)
    {
        return 1;
    }
    else
    {
        return (num*factorial(num-1));
    }

}
