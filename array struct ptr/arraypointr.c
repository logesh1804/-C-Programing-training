#include<stdio.h>
#include<stdlib.h>


typedef struct{
int id;
float marks;
}student;

int main"()
student *arr[3];

for (int i=0;i<3;i++)
{
arr[i]=(student*)malloc(sizeof(student)); 
}

printf("Enter id and marks: ");
scanf("%d %f",&arr[i]->id,&arr[i]->marks);
}

printf("\nStudent Details:\n");

for(int i=0;i<3;i++){
printf("ID: %d  Marks: %.2f\n",
       arr[i]->id,
       arr[i]->marks);
}

for(int i=0;i<3;i++){
free(arr[i]);
}

return 0;
}
