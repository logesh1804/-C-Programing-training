#include<stdio.h>
typedef struct{
int id;
float marks;
}student;

int main(){
student s1;
s1.id=101;
s1.marks=78.5;
printf("id:%d\n",s1.id);
printf("marks:%f\n",s1.marks);
return 0;
}
