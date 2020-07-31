#include<stdio.h>
#include<string.h>
int world(char word[]);
void check(char[],int);
main()
{
    char word[15];
    printf("Enter a string to check if it's a palindrome\n");
    scanf("%s",word);
    world(word);
}
int world(char word[])
{
    int x=0,i,n;
    n=strlen(word);
    for(i=0;i<n;i++)
    {
        if(word[i]!=word[n-1-i])
        {
            printf("Not palindrome\n");
            x=1;
            break;
        }
    }
    if(x!=1)
    {
        printf("Palindrome\n");
    }
}
