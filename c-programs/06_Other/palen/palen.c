#include <stdio.h>

int main() {
    int n, rev=0,y;
    scanf("%d",&y);
    n=y;
    while(n!=0){
        rev = rev*10 + n%10;
        n /= 10;
    
     if (rev==y){
    printf("palen = %d\n", rev);}
    }
    return 0;
}

