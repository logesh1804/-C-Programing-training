#include<stdio.h>
int main(){
    int num = 12;
    int count=0;
for (int i = 31; i >= 0; i--) {
    int bit = (num >> i) & 1;
    printf("%d", bit);
    if(bit == 1){
    
    count=count + bit;}
}
printf("\n %d",count);
}
