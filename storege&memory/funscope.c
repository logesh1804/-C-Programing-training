#include <stdio.h>
static int x = 2;
static int y=10;

void add(){
    printf("%d\n",x+y);}
void sub(){
    printf("%d",x-y);}
    
void func() {
add();
sub();
}
int main() {
func();
return 0;
}
