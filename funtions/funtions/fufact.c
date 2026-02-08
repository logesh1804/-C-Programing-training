#include<stdio.h>
int factorial(int n)
{
int fact = 1;
for (int i = 1;i<=n; i++)
fact = fact*i;
return fact;
}
int main (void)
{int num,result;
printf("enter a number :");
scanf("%d",&num);
result=factorial(num);
printf("factoial =%d\n",result);
return 0;
}

