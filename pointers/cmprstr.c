#include<stdio.h>
int main()
{
	char str [16]={"ORGINAL GANGSTER"};
	char *p=str;

	char str1 [16]={"ORGINAL GANGSTER"}; 
char *pp=str1;
	int i=0;	

if(*(p)==*(pp))
{
		printf("equal");}

else{
printf("str1 and str2 is  not equal ");
}

return 0;
}
