#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,n;
    float x,sum,t;
    printf("Enter value of x:\n");
    scanf("%f",&x);
    printf("Enter value of n:\n");
    scanf("%d",&n);
    x=x*(3.14159/180);
    t=x;
    sum=x;
    for(i=1;i<=n;i++)
    {
        t=(t*(-1)*x*x)/(2*i*(2*i+1));
        sum=sum+t;
    }
    printf("The value of sin(%f)=%4f",x,sum);
}
