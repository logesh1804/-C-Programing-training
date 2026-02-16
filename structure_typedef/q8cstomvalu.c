#include<stdio.h>

enum control { start=10, stop=50, pause=60};
int main()
{
enum control cmd = stop;
printf("start value:%d \n stop value %d \n pause value %d",start,stop,pause );
printf("selectd cmd value:%d\n",cmd);
return 0;
}
