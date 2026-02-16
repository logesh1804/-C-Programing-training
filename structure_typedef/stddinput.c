#include <stdio.h>

typedef struct {
int roll;
float marks;
} Student;

int main()
{
 Student s1;

 printf("Enter Roll Number: ");
scanf("%d", &s1.roll);

printf("Enter Marks: ");
scanf("%f", &s1.marks);

printf("\nStudent Details\n");
printf("Roll: %d\n", s1.roll);
printf("Marks: %.2f\n", s1.marks);

return 0;
}
