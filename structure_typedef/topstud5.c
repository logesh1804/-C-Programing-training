#include<stdio.h>
typedef struct{int roll;float marks;}student;
int main()
{ 
student s[5];

int i;
int topindex=0;
for(i=0;i<5;i++)
{
printf("\nenter roll  no");
scanf("%d",&s[i].roll);
printf("enter a marks\n");
scanf("%f",&s[i].marks);
}
for (i=1;i<5;i++)
{
if(s[i].marks > s[topindex].marks)
{topindex=i;
}
{
printf("toper details roll no:%d and mark is %.2f",s[topindex].roll, s[topindex].marks);
}
return 0;
}
}
