#include<stdio.h>
#include<string.h>
main()
{
    char a[20],c;
    int i,n,p;
    printf("Enter the string :\n");
    gets(a);
    n=strlen(a);
    printf("Enter the character :\n");
    scanf("%c",&c);
    printf("Enter the position :\n");
    scanf("%d",&p);
    for(i=n-1;i>=p;i--)
    {
        a[i+1]=a[i];
    }
    a[p]=c;
    puts(a);
}
