#include<stdio.h>
int my_strlen(char s[]){
int i=0;
while(s[i]!='\0'){
i++;
}
return i;
}
int main(){
char str[100];
printf("Enter string: ");
gets(str);
printf("Length=%d",my_strlen(str));
return 0;
}
