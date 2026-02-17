#include <stdio.h>

enum Direction {
    CW,
    CCW
};

typedef struct {
    int speed;
    enum Direction dir;
} Motor;

int main()
{
    Motor m1;

    m1.speed = 100;
    m1.dir = CW;

    printf("Motor Speed: %d\n", m1.speed);

    if(m1.dir == CW)
        printf("Direction: Clockwise\n");
    else
        printf("Direction: Counter Clockwise\n");

    return 0;
}

