#include<stdio.h>
enum signal{RED,YELLOW,GREEN};

int main(){
enum signal s=RED;

if(s==RED)
printf("STOP\n");
else if(s==YELLOW)
printf("WAIT\n");
else
printf("GO\n");

return 0;
}
