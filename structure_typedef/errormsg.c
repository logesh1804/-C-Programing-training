#include<stdio.h>
enum errorcode { ok,fail,overheat };
int main()
{ 
enum errorcode status =fail;
const char *message[] = {
        "System OK",
        "Failure Occurred",
        "System Overheated"
};
printf("%s",message[status]);
return 0;
}


