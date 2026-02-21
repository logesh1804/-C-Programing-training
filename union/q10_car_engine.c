#include<stdio.h>

struct Engine{
int horsepower;
float capacity;
};

struct Car{
char model[50];
int year;
struct Engine engine;
};

int main(){
struct Car c;
printf("Enter model and year: ");
scanf("%s%d",c.model,&c.year);
printf("Enter horsepower and capacity: ");
scanf("%d%f",&c.engine.horsepower,&c.engine.capacity);

printf("Model: %s\n",c.model);
printf("Year: %d\n",c.year);
printf("Horsepower: %d\n",c.engine.horsepower);
printf("Capacity: %.2f\n",c.engine.capacity);

return 0;
}