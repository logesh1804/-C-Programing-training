#include<stdio.h>
void table(int n)
{
for (int i=1;i<=10;i++)
printf("%d x %d=%d\n",n,i,n*i);
}
int main(void)
{
int num;
printf;("enter a number:");
scanf("%d",&num);
table(num);
return 0;
}
