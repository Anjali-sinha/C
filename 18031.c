#include<stdio.h>
main()
{
    int marks[50],i,low,high;
    int group[11]={0,0,0,0,0,0,0,0,0,0};
    printf("MARKS OBTAINED-\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&marks[i]);
        ++group[(int)(marks[i]/10)];
    }
    printf("\n");
    printf("GROUP   RANGE   FREQUENCY\n");
    for(i=0;i<11;i++)
    {
        low=i*10;
        if(i==10)
            high=100;
        else
            high=low+9;
        printf("%d   %d to %d   %d\n",i+1,low,high,group[i]);
    }
return 0;
}

