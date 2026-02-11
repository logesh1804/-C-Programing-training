#include<stdio.h>
void swapvalue(int a,int b)
{
int temp;
temp =a;
a=b;
b=temp;
printf("inside function: a=%d,b=%d\n",a,b);
}
int main(void)
{
int x=10,y=20;
printf("before swap: x=%d,y=%d\n",x,y);
swapvalue(x,y);
printf("after swap:x=%d,y=%d\n",x,y);
return 0;
}
