#include<stdio.h>
int sumofdigit(int n)
{int sum=0;
while(n!=0)
{
sum=sum+(n%10);
n=n/10;
}
return sum;
}
int main(void)
{
int num,result;
printf("enter a value\n");
scanf("%d",&num);
result=sumofdigit(num);
printf("sum of digits=%d\n",result);
return 0;
}
