#include<stdio.h>
#include<stdlib.h>
struct student
{
    char name[10];
    int rollno,t[3];
};
main()
{
    int i,roll,n,a,msum=0,grt;
    struct student s[20];
    printf("Enter the number of students=\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the name of %d student=\n",i+1);
        scanf("%s",&s[i].name);
        printf("Enter the roll number of %d student=\n",i+1);
        scanf("%d",&s[i].rollno);
        printf("Enter the 3 test scores of %d student=\n",i+1);
        scanf("%d%d%d",&s[i].t[0],&s[i].t[1],&s[i].t[2]);
    }
    printf("Enter the roll number of the student whose details you want=\n");
    scanf("%d",roll);
    for(i=0;i<n;i++)
    {
        if(s[i].rollno==roll)
            break;
        else
            continue;
    }
    a=i;
    printf("The name of the student is=\n");
    printf("%s",s[a].name);
    printf("The 3 test scores of the student is=\n");
    printf("%d  %d  %d",s[a].t[0],s[a].t[1],s[a].t[2]);
    for(i=0;1<n;i++)
    {
        msum=(s[i].t[0]+s[i].t[1]+s[i].t[2])/3;
        if(s[i].t[0]>s[i].t[1])
        {
            if(s[i].t[0]>s[i].t[2])
            {
                grt=s[i].t[0];
            }
            else
            {
                grt=s[i].t[2];
            }
        }
        else
        {
            if(s[i].t[1]>s[i].t[2])
            {
                grt=s[i].t[1];
            }
            else
            {
                grt=s[i].t[2];
            }
        }
        printf("The average marks of %d student is=%d\n",i+1,msum);
        printf("The greatest marks of %d student is=%d\n",i+1,grt);
    }
}
