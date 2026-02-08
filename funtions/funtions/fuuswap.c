#include <stdio.h>

void swapref(int *a, int*b)
{
    int temp;

    temp = *a;
   *a = *b;
    *b = temp;

   
}

int main(void)
{
    int x = 10, y = 20;

    printf("Before swap: x = %d, y = %d\n", x, y);

    swapref(&x,&y);

    printf("After swap:  x = %d, y = %d\n", x, y);

    return 0;
}

