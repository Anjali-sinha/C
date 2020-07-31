#include<stdio.h>
int main()
{
  int i,j,k,n;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    for(j=-i+n-1;j>0;j--)
    {
        printf(" ");
    }
    for(k=0;k<i+1;k++)
    {
        printf("#");
    }
     printf("\n");
  }
  return 0;
}
