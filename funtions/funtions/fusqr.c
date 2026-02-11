#include<stdio.h>

void greet(void)
{
	printf("welcom to embedded system \n");}


int add(int a,int b)
{	
return a+b;
}
int sqr(int a)
{
	return a*a;
}

int main(void)
{
	int square;
	int sum;
       	greet();
sum = add(10, 200);
    printf("Sum = %d\n", sum);	
square = sqr(3);
    printf("Square = %d\n", square);


 return 0;

}
