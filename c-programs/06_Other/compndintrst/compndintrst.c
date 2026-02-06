#include <stdio.h>

int main()
{
    float p = 1000, r = 5, t = 2;
    float amount = p;

    amount += (p * r * t) / 100;

    printf("Final Amount = %.2f\n", amount);
    return 0;
}

