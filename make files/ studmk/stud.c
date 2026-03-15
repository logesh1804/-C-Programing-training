#include<stdio.h>
#include "stud.h"

void addstudent(struct st s[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\nEnter Student %d Details\n",i+1);

        printf("id: ");
        scanf("%d",&s[i].id);

        printf("name: ");
        scanf("%s",s[i].name);

        printf("marks: ");
        scanf("%f",&s[i].marks);
    }
}
void searchstudent(struct st s[], int n)
{
    int sid;

    printf("Enter student ID to search: ");
    scanf("%d",&sid);

    for(int i=0;i<n;i++)
    {
        if(sid == s[i].id)
        {
            printf("\nStudent Found\n");
            printf("ID: %d\n",s[i].id);
            printf("Name: %s\n",s[i].name);
            printf("Marks: %.2f\n",s[i].marks);
            return;
        }
    }

    printf("Student not found\n");
}
void displaystudents(struct st s[], int n)
{
    printf("\nStudent List\n");

    for(int i=0;i<n;i++)
    {
        printf("\nStudent %d\n",i+1);
        printf("ID: %d\n",s[i].id);
        printf("Name: %s\n",s[i].name);
        printf("Marks: %.2f\n",s[i].marks);
    }
}
