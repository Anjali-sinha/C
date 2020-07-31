#include<stdio.h>
#include<math.h>
main()
{
  int dis,x1,x2,a,b,c,i1;
  printf("Enter the coefficients\n");
  scanf("%d%d%d",&a,&b,&c);
  if(a==0)
  {
      printf("Invalid\n");
  }
  dis=((b*b)-(4*a*c));
  if(dis==0)
  {
      printf("The roots are equal\n");
      x1=((-b)+sqrt(dis))/(2*a);
      printf("The roots are r1=r2=%d\n",x1);
  }
  else if(dis>0)
  {
      printf("The roots are real\n");
      x1=((-b)+sqrt(dis))/(2*a);
      x2=((-b)-sqrt(dis))/(2*a);
      printf("The roots are r1=%d and r2=%d\n",x1,x2);
  }
  else if(dis<0)
  {
      printf("The roots are imaginary\n");
      x1=(-b)/(2*a);
      i1=sqrt(fabs(dis))/(2*a);
      printf("The roots are r1=%d+i%d and r2=%d-i%d\n",x1,i1,x1,i1);
  }
}
