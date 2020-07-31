#include<stdio.h>
main()
{
    int length=0,i;
    char string[50];
    printf("Enter the string:\n");
    gets(string);
    for(i=0;string[i]!=0;i++)
    {
        length++;
    }
    printf("Length of %s is %d",string,length);
}
