#include<stdio.h>
main()
{
    int i,j,a=0;
    for(i=1;i<6;i++)
    {
        a=0;
        for(j=1;j<11;j++)
        {
            a=a+i;
            printf("%d\t",a);
        }
        printf("\n");
    }
}
