//FINDING LARGEST ELEMENT//
#include<stdio.h>
main()
{
    int arr[5],i,large;
    printf("Enter elements of array\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    large=arr[0];
    for(i=0;i<5;i++)
    {
       if(arr[i]>large)
       {
           large=arr[i];
       }
    }
printf("Largest element is %d\n",large);
}
