#include <stdio.h>

int isEven(int n)
{
    return (n % 2 == 0);
}

int main(void)
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isEven(num))
        printf("%d is EVEN\n", num);
    else
        printf("%d is ODD\n", num);

    return 0;
}

