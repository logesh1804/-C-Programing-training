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

int avgmarks(student s[],int imax){
	int totmarks=0;

 for(int i=0;i<imax;i++)
 {
	totmarks+=s[i].marks;
 }
 return totmarks;
}

int main(){
int imax;
printf("enter no of student ");

scanf("%d",&imax);
student s[imax];
for(int i=0; i<imax;i++)
{
inptstudent(&s[i]);
}
printf("student details ");
for(int i=0;i<imax ;i++)
{
    	dispstudent(s[i]);

	
}

printf("avg mark is:%d\n",avgmarks(s,imax)/imax);

return 0;

}
