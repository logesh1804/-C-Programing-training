#include <stdio.h>
int main()
{
int age = 25;

float pi = 3.1415;
char grade = 'A';
char name[] = "Silica VLSI";
int octal = 010;
int hex = 0xFF;
const int max = 100;

printf("Age: %d\n", age);
printf("PI: %.4f\n", pi);
printf("Grade: %c\n", grade);
printf("Name: %s\n", name);
printf("Octal (010): %d\n", octal);
printf("Hexadecimal (0xFF): %d\n", hex);
printf("Max Marks (const): %d\n", max);
return 0;
}

