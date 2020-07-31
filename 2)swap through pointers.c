#include<stdio.h>
main()
{
    int x,y,*a,*b,temp;
    printf("Enter two numbers\n");
    scanf("%d%d",&x,&y);
    printf("Before swapping x=%d and y=%d\n",x,y);
    a=&x;
    b=&y;
    temp=*b;
    *b=*a;
    *a=temp;
    printf("After swapping x=%d and y=%d",x,y);
}
