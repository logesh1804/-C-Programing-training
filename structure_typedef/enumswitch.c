#include<stdio.h>
enum menu {
add,sub,mul,div};

int main()
{
int a = 10;
int b = 20;
int temp;
enum menu choice;
printf("0.add\n 1.dub\n 2.mul\n 3.div");
scanf("%d",&temp);
choice=temp;

switch (choice)
{
case add:
printf("%d",a+b);
break;
case sub:
printf("%d",a-b);
break;
case mul:
printf("%d",a*b);
break;
case div:
printf("%d",a/b);
break;
default:
printf("invalid choice");
}
return 0;

}
