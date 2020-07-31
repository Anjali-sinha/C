#include<stdio.h>
int main()
{
    int x1,v1,x2,v2,i,flag=0;
    scanf("%d %d %d %d",&x1,&v1,&x2,&v2);
    for(i=0;i<1000;i++)
    {
        if(x1+i*v1==x2+i*v2)
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}

