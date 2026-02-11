#include<stdio.h>
int a;
int main(){
printf("enter a number ");
scanf("%d",&a);
int sum=0;
for(int i=1;i<=a/2;i++){ 
if(a%i==0)
{
sum+=i;
}
}
if(a==sum)
{printf("its perfect number: %d/n",a);
}return 0;
}
