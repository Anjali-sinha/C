#include<stdio.h>
main()
{
int a,b,c;
printf("Enter three numbers a,b and c");
scanf("%d%d%d",&a,&b,&c);
if(a>=b&&a>=c)
{
printf("a is the largest number");
}
if(b>=a&&b>=c)
{
printf("b is the largest number");
}
if(c>=a&&c>=b)
{
printf("c is the largest number");
}
}
