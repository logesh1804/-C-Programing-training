#include <stdio.h>
#include "string_utils.h"

int main()
{
    char str1[100] = "Hello";
    char str2[100];

    printf("length = %d\n", my_strlen(str1));

    my_strcpy(str2, str1);

    printf("copied string = %s\n", str2);

    return 0;
}
