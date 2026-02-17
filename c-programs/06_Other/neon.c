#include<stdio.h>
int sum=0;
int main(){
int a;
scanf("%d",&a);
int sqr=a*a;
while(sqr!=0){
int d= sqr%10;
sum=sum+d;
sqr= sqr/10;}
printf("neon num of %d is %d",a,sum);
return 0;
}

 
