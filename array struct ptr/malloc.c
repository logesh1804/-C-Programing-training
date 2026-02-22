#include<stdio.h>
#include<stdlib.h>

typedef struct{
int id;
float marks;
}student;

int main(){

student *s;

s = (student*)malloc(sizeof(student));
printf("Allocated Address: %p\n", s);
if(s == NULL){
printf("Memory allocation failed\n");
return 1;
}
student stackVar;
printf("Stack Address: %p\n", &stackVar);
printf("Heap Address: %p\n", s);


printf("Enter id and marks: ");
scanf("%d %f",&s->id,&s->marks);

printf("ID: %d  Marks: %.2f\n",s->id,s->marks);

free(s);

return 0;
}
