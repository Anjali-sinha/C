#include<stdio.h>
main()
{
    char a[10];
    int i,j,n,b[10],temp;
    printf("Enter the string :\n");
    gets(a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        b[i]=(int)a[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(b[j]>b[j+1])
            {
                temp=b[j];
                b[j]=b[j+1];
                b[j+1]=temp;
            }
        }
    }
    printf("The sorted string is :\n");
    for(i=0;i<n;i++)
    {
        printf("%c",b[i]);
    }
}
