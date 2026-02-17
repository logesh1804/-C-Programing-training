#include <stdio.h>

int main()
{
    int a = 10, b = 20, c = 30;
    int sum;
    float avg;

    sum = a + b + c;
    avg = sum / 3.0;

    printf("Sum = %d\nAverage = %.2f\n", sum, avg);
    return 0;
}

