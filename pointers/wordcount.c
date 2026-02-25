#include<stdio.h>
int main()
{
	char str []={" logesh the O G   GANGSTER  master the balaster  thalapathi"};
	char *p=str;
int len=0;
int vow=1;


while(*(p+len)!='\0')

{
	
if(*(p+len)==' ')

{
vow++;

if (*(p+(len-1))==' ')
{vow=vow-1;}
int i=0;
if (*(p+i)==' ')
{vow = vow-1;}

}
len ++;
}
printf("words count =%d",vow);

}
