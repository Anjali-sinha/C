#include<stdio.h>
main()
{
    int a[10],min=0,max=0,n,i,sum=0;
    float avg;
    printf("Enter the number of natural numbers\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
        if(i==0)
        {
            min=max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    avg=sum/n;
    printf("Minimum is %d and maximum is %d\n",min,max);
    printf("The range is [%d,%d]\n",min,max);
    printf("The average of all numbers is %0.2f\n",avg);
}
