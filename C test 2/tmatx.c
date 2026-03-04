#include<stdio.h>
void rev (char *p,char *n){
	int i=0;
	while(*(p+i)!='\0'){
	*(n+i)=*(p+i);
	i++;}
	*(n+i)='\0';

}



int main()
{
printf("enter array value ");
char n[50];
char l[50];
fgets(n,50,stdin);
rev(n,l);
printf("%s",l);
return 0;
}



