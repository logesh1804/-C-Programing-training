#include<stdio.h>

struct DOB{
int day;
int month;
int year;
};

struct Person{
char name[50];
struct DOB dob;
};

int main(){
struct Person p;
int currentYear=2026;
int age;

printf("Enter name: ");
scanf("%s",p.name);
printf("Enter day month year of birth: ");
scanf("%d%d%d",&p.dob.day,&p.dob.month,&p.dob.year);

age=currentYear-p.dob.year;

printf("Name: %s\n",p.name);
printf("Age: %d\n",age);

return 0;
}