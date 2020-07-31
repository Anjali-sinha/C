#include<stdio.h>
main()
{
    float a,b,sum,sub,mul,div;
    int ch;
    printf("Enter two numbers\n");
    scanf("%f%f",&a,&b);
    printf("Enter choice\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:sum=a+b;
        printf("Sum=%f",sum);
        break;
        case 2:sub=a-b;
        printf("Difference=%f",sub);
        break;
        case 3:mul=a*b;
        printf("Product=%f",mul);
        break;
        case 4:div=a/b;
        printf("Division=%f",div);
        break;
        Default:printf("Invaid choice");
    }
}
