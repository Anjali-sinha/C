#include<stdio.h>
int main()
{
    int i,j;
    int sum=0,min=999,max=0,arr[5];
    for(i=0;i<5;i++)
    {
        scanf("%ld",&arr[i]);
    }
    for(i=0;i<5;i++)
    {sum=0;
        for(j=0;j<5;j++)
        {
            if(arr[i]!=arr[j])
            {
                sum+=arr[j];
            }
        }
        if(sum<min)
        {
            min=sum;
        }
        if(sum>max)
        {
            max=sum;
        }
    }
    printf("%ld %ld",min,max);
return 0;
}
