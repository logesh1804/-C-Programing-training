#include <stdio.h>

int main() {
    int a[5], sum=0;

    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
        sum += a[i];
    }

    printf("Sum=%d Avg=%.2f\n", sum, sum/5.0);
    return 0;
}

