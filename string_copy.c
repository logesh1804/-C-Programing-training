#include<stdio.h>
void my_strcpy(char s1[],char s2[]){
int i=0;
while(s2[i]!='\0'){
s1[i]=s2[i];
i++;
}
s1[i]='\0';
}
int main(){
char src[100],dest[100];
printf("Enter string: ");
gets(src);
my_strcpy(dest,src);
printf("Copied string=%s",dest);
return 0;
}
