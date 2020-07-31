#include<stdio.h>
#include<stdlib.h>
void input(int[],int);
void sort(int[],int);
void print(int[],int[],int);
main()
{
    int n,i;
    printf("Enter the no. of elements\n");
    scanf("%d",&n);
    int a[n];
    input(a,n);
    int b[n];
    for(i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    sort(b,n);
    print(a,b,n);
}
void input(int a[],int n)
{
    int i;
    printf("Enter the values :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

}
void sort(int b[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(b[i]<b[j])
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
}
void print(int a[],int b[],int n)
{
    int i;
    printf("Unsorted array\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n\n");
    printf("Sorted array\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",b[i]);
    }
}
