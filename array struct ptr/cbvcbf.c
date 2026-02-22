#include<stdio.h>

struct Employee{
int id;
float salary;
};

void modifyByValue(struct Employee e){
e.salary = e.salary + 1000;
printf("Inside modifyByValue Salary: %.2f\n",e.salary);
}

void modifyByPointer(struct Employee *e){
e->salary = e->salary + 1000;
printf("Inside modifyByPointer Salary: %.2f\n",e->salary);
}

int main(){

struct Employee emp;

printf("Enter id and salary: ");
scanf("%d %f",&emp.id,&emp.salary);

modifyByValue(emp);
printf("After modifyByValue Salary: %.2f\n",emp.salary);

modifyByPointer(&emp);
printf("After modifyByPointer Salary: %.2f\n",emp.salary);

return 0;
}
