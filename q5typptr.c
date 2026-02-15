#include<stdio.h>
typedef int* intptr;

void swap(intptr a,intptr b){
int temp=*a;
*a=*b;
*b=temp;
}

int main(){
int x=5,y=9;
swap(&x,&y);
printf("x=%d y=%d\n",x,y);
return 0;
}