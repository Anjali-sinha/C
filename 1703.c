#include<stdio.h>
main()
{
float fahr=300,c;
while(fahr>=0)
{
    c=(5.0/9.0)*(fahr-32.0);
    printf("%99.0f\t %-66.1f\n",fahr,c);
    fahr-=20;

}
return 0;
}
