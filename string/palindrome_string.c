#include<stdio.h>
int my_strlen(char s[]){
int i=0;
while(s[i]!='\0'){
i++;
}
return i;
}
int isPalindrome(char s[]){
int i=0,j=my_strlen(s)-1;
while(i<j){
if(s[i]!=s[j]){
return 0;
}
i++;
j--;
}
return 1;
}
int main(){
char str[100];
printf("Enter string: ");
gets(str);
if(isPalindrome(str))
printf("Palindrome");
else
printf("Not Palindrome");
return 0;
}
