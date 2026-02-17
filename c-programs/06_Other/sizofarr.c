#include <stdio.h>

int main()
{
    int a[5] = {1,2,3,4,5};

    printf("Array size = %lu bytes\n", sizeof(a));
    printf("One element size = %lu bytes\n", sizeof(a[0]));
    printf("Total elements = %lu\n", sizeof(a)/sizeof(a[0]));

    return 0;
}

