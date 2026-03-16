#include <stdio.h>
#include "file_ops.h"

void write_file(const char *filename)
{
    FILE *fp;
    char data[100];

    fp = fopen(filename, "w");

    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return;
    }

    printf("Enter text to write: ");
    scanf(" %[^\n]", data);

    fprintf(fp, "%s\n", data);

    fclose(fp);

    printf("Data written successfully\n");
}

void read_file(const char *filename)
{
    FILE *fp;
    char data[100];

    fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("File not found!\n");
        return;
    }

    printf("File contents:\n");

    while (fgets(data, sizeof(data), fp))
    {
        printf("%s", data);
    }

    fclose(fp);
}
