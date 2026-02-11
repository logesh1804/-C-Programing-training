#include <stdio.h>

int reverseNumber(int n)
{
    int rev = 0;
    while (n != 0)
    {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    return rev;
}

int isPalindrome(int n)
{
    return n == reverseNumber(n);
}

int main(void)
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num))
        printf("Palindrome number\n");
    else
        printf("Not a palindrome\n");

    return 0;
}
