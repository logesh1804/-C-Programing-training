#include <stdio.h>

/* Set a bit */
int setBit(int num, int pos)
{
    return num | (1 << pos);
}

/* Clear a bit */
int clearBit(int num, int pos)
{
    return num & ~(1 << pos);
}

/* Toggle a bit */
int toggleBit(int num, int pos)
{
    return num ^ (1 << pos);
}

/* Check a bit */
int checkBit(int num, int pos)
{
    return (num >> pos) & 1;
}

int main()
{
    int num = 10;   // 1010
    int pos = 1;

    printf("Original number = %d\n", num);

    printf("Set bit: %d\n", setBit(num,pos));

    printf("Clear bit: %d\n", clearBit(num,pos));

    printf("Toggle bit: %d\n", toggleBit(num,pos));

    printf("Check bit: %d\n", checkBit(num,pos));

    return 0;
}
