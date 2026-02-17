#include <stdio.h>

typedef struct {
    int roll;
    float marks;
} Student;

void printStudent(Student &s1)   
{ s1->marks +=100;

   }

int main()
{
    Student s1;

    printf("Enter Roll: ");
    scanf("%d", &s1.roll);

    printf("Enter Marks: ");
    scanf("%f", &s1.marks);

    printStudent(*s1);        printf("\nStudent Details:\n");
    printf("Roll: %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);


    return 0;
}

