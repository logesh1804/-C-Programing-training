#include <stdio.h>

void swapValue(int a, int b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;

    printf("Inside function: a = %d, b = %d\n", a, b);
}

int main(void)
{
    int x = 10, y = 20;

    printf("Before swap: x = %d, y = %d\n", x, y);

    swapValue(x, y);

    printf("After swap:  x = %d, y = %d\n", x, y);

    return 0;
}

