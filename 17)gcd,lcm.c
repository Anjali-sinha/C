#include<stdio.h>
long gcd(long,long);
main()
{
    long x,y,hcf,lcm;
    printf("Enter two numbers :\n");
    scanf("%d%d",&x,&y);
    hcf=gcd(x,y);
    lcm=(x*y)/hcf;
    printf("The highest common factor of %1d and %1d is %1d :\n",x,y,hcf);
    printf("The lowest common multiple of %1d and %1d is %1d :\n",x,y,lcm);
}
long gcd(long a,long b)
{
    if(b==0)
    {
        return a;
    }
    else
    {
        return gcd(b,a%b);
    }
}
