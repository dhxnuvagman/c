#include<stdio.h>
#include<string.h>
struct student
{
    char name[20],usn[20];
    int mark1,mark2,mark3,total_marks;
};
main()
{
    int n, i,avg[100];
    struct student s[100];
    printf("enter student details\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter student %d details \n",i+1);
        printf("enter the name\n");
        scanf("%s",s[i].name);
        printf("enter usn \n");
        scanf("%s",s[i].usn);
        printf("enter three subject marks\n");
        scanf("%d%d%d",&s[i].name,&s[i].usn,&s[i].mark1,&s[i].mark2,&s[i].mark3);
        s[i].total_marks=s[i].mark1+s[i].mark2+s[i].mark3;
        avg[i]=s[i].total_marks/3;
    }
    printf("Student details\n");
    printf("Name \t USN\t marks1\t marks2\t marks3\t total_marks \t avg[i]\n");
    for(i=0;i<n;i++)
    {
        printf("%s\t%s\t%d\t%d\t%d\t%d\t%d\n",s[i].name,s[i].usn
       ,s[i].mark1,s[i].mark2,s[i].mark3,s[i].total_marks,avg[i]);

    }
    printf("student above average\n");
    printf("Name\t\tUSN\\t\tAvg\n");
    for(i=0;i<n;i++)
    {
       if(avg[i]>=45)
        {
            printf("%s\t\t%s\t\t%d\n",s[i].name,s[i].usn,avg[i]);
        }
    }
    printf("students below average\n");
    printf("Name\t\tUSN\t\tAvg\n");
    for(i=0;i<n;i++)
    {
      if(avg[i]<45)
      {
         printf("%s\t\t%s\t\t%\n",s[i].name,s[i].usn,avg[i]);
      }
    }
}
