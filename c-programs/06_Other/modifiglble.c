#include <stdio.h>

int g = 10;

void change()
{
    g = 50;
}

int main()
{
    change();
    printf("Global value = %d\n", g);
    return 0;
}

