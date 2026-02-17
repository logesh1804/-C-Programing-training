#include <stdio.h>

int main() {
    int a[4];

    for(int i=0;i<4;i++)
        scanf("%d",&a[i]);

    for(int i=3;i>=0;i--)
        printf("%d ", a[i]);

    return 0;
}
