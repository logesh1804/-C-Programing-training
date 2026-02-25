#include<stdio.h>
int main()
{
	char str []={"logesh"};
	char *p=str;
int len=0;
int vow;


while(*(p+len)!='\0')

{
	
if(*(p+len)=='a'||*(p+len)=='e'||*(p+len)=='i'||*(p+len)=='o'||*(p+len)=='u'||*(p+len)=='A'||*(p+len)=='E'||*(p+len)=='I'||*(p+len)=='O'||*(p+len)=='U'){
vow++;

}
len ++;
}
printf("vowels count =%d",vow);

}
