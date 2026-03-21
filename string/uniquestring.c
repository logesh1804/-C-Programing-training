#include <stdio.h>
#include<string.h>
int main() {

    char a[] ="madamji";
    for(int i=0;a[i]!='\0';i++){
        int flag=1;
        if(a[i]=='*'){
            continue;
        }
        for(int j=i+1;a[j]!='\0';j++){
if(a[i]==a[j]){
    flag=0;
    a[j]='*';
    break;
}
}
   if(flag==1){
         printf("%c",a[i]);
    
}
}
