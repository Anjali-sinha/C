#include<stdio.h>
main()
{
static int m=5,x,y;
y=m++;
x=++m;
printf("y=%d\n",y);
printf("x=%d",x);
}
