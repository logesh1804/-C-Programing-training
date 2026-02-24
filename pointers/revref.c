#include <stdio.h>

void revno(int *n,int *rev ){
while (*n>0){
*rev = 	(*rev)*10 + (*n)%10;
        *n /= 10;
}

}


int main() {
    int n, rev=0;
    scanf("%d",&n);
    revno(&n,&rev);
    printf(" reverse no:%d",rev);
    return 0;
}
