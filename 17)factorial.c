#include<stdio.h>
int factorial(int);
void main()
{
    int num,result;
    printf("Enter the number :\n");
    scanf("%d", &num);
    if(num<0)
    {
        printf("It is not possible\n"); //not posible beacuse negative value not posible in factorial
    }
    else
    {
        result = factorial(num);
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
