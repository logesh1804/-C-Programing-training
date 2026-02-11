#include <stdio.h>
#include "math_operations.h"

int main(void)
{
    int sum = add(10, 20);
    int diff = subtract(20, 10);

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);

    return 0;
}

