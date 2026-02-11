#include <stdio.h>

struct sample
{
    char a;
    int b;
    float c;
};

int main()
{
    struct sample s;

    printf("Size of structure = %lu bytes\n", sizeof(s));

    return 0;
}

