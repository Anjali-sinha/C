#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    float a,b,c,pos=0,neg=0,zero=0;
    float arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%f",&arr[i]);
        if(arr[i]<0.0)
        {
          neg+=1;
        }
        else if(arr[i]>0.0)
        {
          pos+=1;
        }
        else if(arr[i]==0.0)
        {
          zero+=1;
        }
    }
      printf("%f\n",neg);
       printf("%f\n",pos);
       printf("%f\n",zero);
    a=pos/n;
    b=neg/n;
    c=zero/n;
    printf("%f\n%f\n%f\n",a,b,c);
    return 0;
}
