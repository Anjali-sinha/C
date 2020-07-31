#include<stdio.h>
main()
{
    int i;
    float x[10],total;
    printf("Enter 10 real numbers\n");
    for(i=0;i<10;i++)
    {
        scanf("%f",&x[i]);

    }
    total=0.0;
    for(i=0;i<10;i++)
    {
        total=total+x[i]*x[i];
    }
    printf("\n");
    for(i=0;i<10;i++)
    {
        printf("x[%2d]=%.2f\n",i+1,x[i]);
    }
    printf("total=%f",total);
    return 0;
}
