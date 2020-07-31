#include<stdio.h>
int main()
{
    int a[3],b[3],i,points[2]={0,0};
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
        {
            ++points[0];
        }
        else if(a[i]<b[i])
        {
            ++points[1];
        }
    }
    printf("%d  %d\n",points[0],points[1]);
    return 0;
}
