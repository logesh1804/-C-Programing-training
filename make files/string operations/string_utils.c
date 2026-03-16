#include"string_utils.h"

int my_strlen(char *str)
{
    int count = 0;

    while(str[count] != '\0')
    {
        count++;
    }

    return count;
}

void my_strcpy(char *dest, char *src)
{
    int i = 0;

    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';
}
