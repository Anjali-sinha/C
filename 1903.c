#include<stdio.h>
main()
{
    int value[4][3],i,j,grand_total;
    int girl_total[4],item_total[3];
    printf("Enter values row-wise\n");
    for(i=0;i<4;i++)
    {
        girl_total[i]=0;
        for(j=0;j<3;j++)
        {
            scanf("%d",&value[i][j]);
            girl_total[i]+=value[i][j];
        }

    }
     for(j=0;j<3;j++)
     {
         item_total[j]=0;
          for(i=0;i<4;i++)
          {
              item_total[j]+=value[i][j];
          }
     }
     for(i=0;i<4;i++)
    {
        printf("Total value of sales by girl%d=%d\n",i+1,girl_total[i]);
    }
     for(j=0;j<3;j++)
     {
         printf("Total value of item sold of item%d=%d\n",j+1,item_total[j]);
     }
     grand_total=0;
     for(i=0;i<4;i++)
     {
         grand_total+=girl_total[i];
     }
     printf("Grand Total=%d\n",grand_total);
     return 0;
}
