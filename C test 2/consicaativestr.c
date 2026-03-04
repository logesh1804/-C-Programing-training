#include <stdio.h>

int main() {
    char a[100];
    scanf("%s", a);

    int read = 1;
    int write = 1;

    while (a[read] != '\0') {
        if (a[read] != a[read - 1]) {
            a[write] = a[read];
            write++;
        }
        read++;
    }

    a[write] = '\0';   

    printf("%s", a);
    return 0;
}
