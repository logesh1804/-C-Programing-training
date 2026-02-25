#include<stdio.h>
int main()
{
	char str []={"OG"};
	char *p=str;

	char str1 [3];
char *pp=str1;
	int i=0;	

while(*(p+i)!='\0'){
	
		*(pp+i)=*(p+i);
		i++;
	//printf("%s",*(pp+i));
}
*(pp+i)='\0';
while (*pp!='\0'){

printf ("%c",*pp++);
}
return 0;
}
