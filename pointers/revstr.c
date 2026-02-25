#include<stdio.h>
int main()
{
	char str []={"OG"};
	char *p=str;
int len=0;

while(*(p+len)!='\0')

{len ++;
}
for(int i=len-1;i>=0;--i)

{
	printf("%c",*(p+i));
}

return 0;
}
