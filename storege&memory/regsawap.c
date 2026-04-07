#include <stdio.h>

int main() {
    register int a = 10;
    register int b = 20;
    register int temp;

    temp = a;
    a = b;
    b = temp;

    printf("a = %d, b = %d\n", a, b);
    return 0;
}
