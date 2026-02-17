#include <stdio.h>

int main()
{
    int n = 7;

    if (n & 1)
        printf("Odd\n");
    else
        printf("Even\n");

    return 0;
}

