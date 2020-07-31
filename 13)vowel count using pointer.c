#include<stdio.h>
main()
{
    int n,i,ccount=0,vcount=0;
    char a[10],*p;
    printf("Enter the string:\n");
    gets(a);
    p=a;
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(*(p+i)=='a'||*(p+i)=='e'||*(p+i)=='i'||*(p+i)=='o'||*(p+i)=='u'||*(p+i)=='A'||*(p+i)=='E'||*(p+i)=='I'||*(p+i)=='O'||*(p+i)=='U')
        {
            vcount+=1;
            continue;
        }
        if(('a'<=*(p+i)<='z')||('A'<=*(p+i)<='z'))
        {
            ccount+=1;
        }
    }
    printf("There are %d vowels and %d consonants in the string",vcount,ccount);
}
