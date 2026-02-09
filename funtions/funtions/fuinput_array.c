#include <stdio.h>

void inputArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
}

int main(void)
{
    int arr[10];
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    inputArray(arr, n);

    return 0;
}
