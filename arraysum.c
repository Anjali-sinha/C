#include<stdio.h>
int main()
{
    int n;
    int arr[n];
    int i;
    int sum=0;
    printf("Enter the size of array\n");
    scanf("%d\n",&n);
    printf("Enter the array elements\n");
     for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("%d\n",sum);
    return 0;
}
