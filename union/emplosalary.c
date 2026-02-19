#include<stdio.h>
typedef struct {
int id;
int salary;
char name[20];
char dept[20];
}employee;


void inptemployee (employee *e)
{
printf("enter eploye details id ,slary,name, dept");
scanf ("%d" "%d" "%s" "%s", &e->id,&e->salary,e->name,e->dept);
}


void dispemployee(employee e){
printf ("id:%d |salary:%d|name:%s|dept:%s\n",e.id,e.salary,e.name,e.dept);
}






int main()
{
employee e[5];
for(int i=0; i<5;i++){
inptemployee(&e[i]);
}
printf(" largest salary ");
int max=0;
for(int  i=1; i<5;i++){
if(e[max].salary<e[i].salary){
max=i;
}
}
dispemployee(e[max]);

return 0;
}




