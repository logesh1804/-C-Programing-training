#include<stdio.h>

void swap(int *a, int *b){
int temp;
temp = *a;
*a = *b;
*b = temp;
}
void modify(int *a,int *b){

*a+=10;
*b+=10;

}









int main(){

int x = 25;
int y = 30;

printf("Before Swap: x = %d  y = %d\n", x, y);
swap(&x, &y);
printf("After Swap:  x = %d  y = %d\n", x, y);
modify(&x,&y);
printf("modifies values %d %d",x,y);
return 0;
}
