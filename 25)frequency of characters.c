#include<stdio.h>
#include<string.h>
main()
{
    char a[10],c;
    int freq=0,i,n;
    printf("Enter the string :\n");
    gets(a);
    n=strlen(a);
    printf("Enter the character :\n");
    scanf("%c",&c);
    for(i=0;i<n;i++)
    {
        if(a[i]==c)
        {
            freq+=1;
        }
    }
    printf("Frequecy of character %c is %d",c,freq);
}
