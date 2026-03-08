#include <stdio.h>

int setBit(int num, int pos)
{
    return num | (1 << pos);
}

int main()
{
    int num = 5;
    int pos = 1;

    printf("Result: %d", setBit(num, pos));

    return 0;
}
