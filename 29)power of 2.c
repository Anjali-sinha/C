#include<stdio.h>
#include<stdlib.h>
main()
{
    float a,i,s;
    printf("Enter the number :\n");
    scanf("%f",&a);
    for(i=0;i<500;i++)
    {
        s=a/pow(2,i);
        if(s==1)
        {
            printf("The number is a power of 2\n");
            break;
        }
        else if(s<1)
        {
            printf("The number is not a power of 2\n");
            break;
        }
    }
}
