#include<stdio.h>
#include<ctype.h>
void count(char s[]){
int v=0,c=0,d=0,sp=0,i=0;
while(s[i]!='\0'){
if(isalpha(s[i])){
if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
v++;
else
c++;
}
else if(isdigit(s[i]))
d++;
else if(s[i]==' ')
sp++;
i++;
}
printf("Vowels=%d\nConsonants=%d\nDigits=%d\nSpaces=%d",v,c,d,sp);
}
int main(){
char str[100];
printf("Enter string: ");
gets(str);
count(str);
return 0;
}
