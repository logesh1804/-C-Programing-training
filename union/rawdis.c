#include <stdio.h>
#include <stdint.h>

union Data
{
    uint16_t value;
    uint8_t bytes[2];
};

int main()
{
    union Data d;

d.value = 0x1234;  

printf("16-bit value: 0x%X\n", d.value);

printf("Raw memory bytes:\n");

    printf("Byte 0: 0x%X\n", d.bytes[0]);
   printf("Byte 1: 0x%X\n", d.bytes[1]);

    return 0;
}

