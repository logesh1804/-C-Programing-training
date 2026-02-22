#include<stdio.h>

struct Student{
int id;
char name[50];
float marks;
};

void printStudent(struct Student s){
printf("ID: %d\n",s.id);
printf("Name: %s\n",s.name);
printf("Marks: %.2f\n",s.marks);
}

int main(){

struct Student s1;

printf("Enter id name marks: ");
scanf("%d %s %f",&s1.id,s1.name,&s1.marks);

printStudent(s1);

return 0;
}
