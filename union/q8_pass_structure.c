#include<stdio.h>

struct Employee{
int id;
float salary;
};

void modifyByValue(struct Employee e){
e.salary=e.salary+500;
}

void modifyByPointer(struct Employee *e){
e->salary=e->salary+500;
}

int main(){
struct Employee e1;
printf("Enter id and salary: ");
scanf("%d%f",&e1.id,&e1.salary);

modifyByValue(e1);
printf("After pass by value Salary: %.2f\n",e1.salary);

modifyByPointer(&e1);
printf("After pass by pointer Salary: %.2f\n",e1.salary);

return 0;
}