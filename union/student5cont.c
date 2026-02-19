#include<stdio.h>
typedef struct { int id;
int marks;
char name[20];
}student;



void inptstudent(student *s){



printf ("enter the id, marks names");
scanf("%d" "%d" "%s", &s->id,&s->marks,s->name);


}


void dispstudent(student s){
printf("ID: %d | Marks: %d | Name: %s\n",s.id, s.marks, s.name);
}



int main()
{
student s[5];
for(int i=0; i<5;i++)
{
inptstudent(&s[i]);}
printf("student details ");
for(int i=0;i<5;i++)
{
	dispstudent(s[i]);

	
}

return 0;

}


