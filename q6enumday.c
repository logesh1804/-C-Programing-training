#include<stdio.h>
enum days{SUN,MON,TUE,WED,THU,FRI,SAT};

int main(){
enum days today=WED;
printf("today value=%d\n",today);
return 0;
}