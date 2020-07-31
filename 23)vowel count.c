#include<stdio.h>
#include<string.h>
main()
{
    char s[100];
    int n,j,a=0,e=0,i=0,o=0,u=0;
    printf("Enter the string :\n");
    gets(s);
    n=strlen(s);
    for(j=0;j<n;j++)
    {
        if(s[j]=='a'||s[j]=='A')
            a++;
        if(s[j]=='e'||s[j]=='E')
            e++;
        if(s[j]=='i'||s[j]=='I')
            i++;
        if(s[j]=='o'||s[j]=='O')
            o++;
        if(s[j]=='u'||s[j]=='U')
            u++;
    }
    printf("No. of a's in the string is %d\n",a);
    printf("No. of e's in the string is %d\n",e);
    printf("No. of i's in the string is %d\n",i);
    printf("No. of o's in the string is %d\n",o);
    printf("No. of u's in the string is %d\n",u);
    printf("Total no. of vowels in the string is %d\n",a+e+i+o+u);


}
