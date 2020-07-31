#include<stdio.h>
main()
{
    int year;
    printf("Enter an year\n");
    scanf("%d",&year);
    if(year%400==0)
    {
        printf("It's a leap year\n");
    }
    else if(year%100==0)
    {
        printf("It's not a leap year\n");
    }
    else if(year%4==0)
    {
        printf("It's a leap year\n");
    }
    else
    {
        printf("It's not a leap year");
    }
}
