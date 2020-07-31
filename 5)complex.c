#include<stdio.h>
struct complex
{
    int real,img;
};
main()
{
    struct complex a1,b1,a2,b2,c,d;
    printf("Enter the values of a1 and b1 for the first complex number=");
    scanf("%d%d",&a1.real,&b1.img);
    printf("Enter the values of a2 and b2 for the second complex number=");
    scanf("%d%d",&a2.real,&b2.img);
    c.real=a1.real+a2.real;
    c.img=b1.img+b2.img;
    printf("Sum of the two complex numbers is:%d+%di",c.real,c.img);
}
