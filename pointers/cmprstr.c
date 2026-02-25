#include<stdio.h>
int main()
{
	char str [16]={"ORGIN GANGSTER"};
	char *p=str;

	char str1 [16]={"ORGINAL GANGSTER"}; 
char *pp=str1;
	int i=0;	
	int s;
while(*(p+i)!='\0'){
	
if (*(p+i)==*(pp+i))
{ s=1;
	}

else{
s=0;
    break;
}

	i++;
}
if (s)
{printf("str is equal ");}

else

    printf("str is not equal " );

return 0;
}
