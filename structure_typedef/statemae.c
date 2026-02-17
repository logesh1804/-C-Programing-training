#include <stdio.h>

enum State {
    INIT,
    RUNNING,
    ERROR
};
typedef struct {
int device_id;
 enum State state;
} Device;
void updateState(Device *d)
{
 if(d->state == INIT)
     	   d->state = RUNNING;
    else if(d->state == RUNNING)
        d->state = ERROR;
}
int main()
{
 Device d1;

 d1.device_id = 101;
 d1.state = INIT;

 printf("Initial State: %d\n", d1.state);

 updateState(&d1);

  printf("Updated State: %d\n", d1.state);
    return 0;
}

