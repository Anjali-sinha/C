#include<stdio.h>
int fibo(int);
main()
{
    int num,result;
    printf("Enter the number :\n");
    scanf("%d",&num);
    if(num<0)
    {
        printf("It's not possible\n");
    }
    else
    {
        result=fibo(num);
        printf("The %dth fibonacci number from the series is: %d\n",num,result);
    }
}
int fibo(int num)
{
    if(num==0)
    {
        return 0;
    }
    else if(num==1)
    {
        return 1;
    }
    else
    {
        return(fibo(num-1)+fibo(num-2));
    }
}
