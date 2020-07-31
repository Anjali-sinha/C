#include <stdio.h>
#include <stdlib.h>
//#include <structure.>

struct student
{
    char name[50];
    int rollno;
    int t1;
    int t2;
    int t3;

};

int main()
{
    int n,i,roll;
    printf("Enter number of students\n");
    scanf("%d",&n);
    struct student s[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the name of the student%d: ",i+1);
        scanf("%s",&s[i].name);
        printf("Enter the roll no. of the student%d: ",i+1);
        scanf("%d",&s[i].rollno);
        //struct test t;
        printf("Enter marks of test 1: ");
        scanf("%d",&s[i].t1);
        printf("Enter marks of test 2: ");
        scanf("%d",&s[i].t2);
        printf("Enter marks of test 3: ");
        scanf("%d",&s[i].t3);
    }
    float avg1,avg2,avg3;
    int high,sum=0;
    for(i=0;i<n;i++)
    {
        sum = sum + s[i].t1;
    }
    avg1 =(float)sum/n;
    printf("Average marks of test 1: %f\n",avg1);
    sum = 0;
    for(i=0;i<n;i++)
    {
        sum = sum + s[i].t2;
    }
    avg2 =(float)sum/n;
    printf("Average marks of test 2: %f\n",avg2);
    sum = 0;
    for(i=0;i<n;i++)
    {
        sum = sum + s[i].t3;
    }
    avg3 =(float)sum/n;
    printf("Average marks of test 3: %f\n",avg3);

    printf("Enter the rollno.\n");
    scanf("%d",&roll);
    for(i=0;i<n;i++)
    {
        if(roll==s[i].rollno)
        {
            printf("Student name:%s\n",s[i].name);
            printf("Student marks:%d %d %d\n",s[i].t1,s[i].t2,s[i].t3);
            return;
        }
    }

        printf("Student details doesn't exist in out records");
        return 0;
}
