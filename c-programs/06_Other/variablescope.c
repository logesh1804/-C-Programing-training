#include <stdio.h>

int g = 10;   // global variable

void demo()
{
    static int s = 5;  // static variable
    s++;
    printf("Static: %d\n", s);
}

int main()
{
    int l = 20;  // local variable

    printf("Global: %d\n", g);
    printf("Local: %d\n", l);
    demo();
    demo();
    return 0;
}

