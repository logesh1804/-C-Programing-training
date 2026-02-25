#include<stdio.h>
int main()
{
	char str []={"OG"};
	char *p=str;

int len;
	while(*p!='\0'){
		 len++;
			p++;

	}
	printf(" length of str =%d",len);

return 0;
}
