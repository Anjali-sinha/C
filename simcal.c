#include<stdio.h>
main()
{
int a,b,sum,sub,div,mul,ch;
printf("Enter values for a and b");
scanf("%d%d",&a,&b);
printf("Enter choice");
scanf("%d",&ch);
switch(ch)
{
    case 1:sum=a+b;
    printf("sum=%d",sum);
    break;
    case 2:sub=a-b;
    printf("sub=%d",sub);
    break;
    case 3:div=a/b;
    printf("div=%d",div);
    break;
    case 4:mul=a*b;
    printf("mul=%d",mul);
    break;
    default:printf("Invalid ch");
}
}
