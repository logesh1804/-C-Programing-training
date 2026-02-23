#include<stdio.h>
int main(){

int x = 25;
int *p = &x;
printf("Value of x : %d\n", x);

printf("Address of x (&x): %p\n", &x);
printf("Value of p   %p\n", p);
printf("Value at *p: %d\n", *p);

printf("Address of p (&p): %p\n", &p);

return 0;
}
