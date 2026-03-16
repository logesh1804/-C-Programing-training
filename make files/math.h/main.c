#include<stdio.h>
#include"mathprog.h"
int main(){
	printf("enter mode 1 sqrt 2power ");
	int a;
	int b,c;
	int result;
	while(1){

	scanf("%d",&a);
	if(a==1){
	printf("enter int for sqrt");
	scanf("%d",&b);
	result=square(b);
	printf("sqr =%d",result);
	}
	else if(a==2){
		printf("enter power base and exponent values");

		scanf("%d",&b);
		scanf("%d",&c);
		result=power(b,c);
		printf("poewr=%d",result);;
	
	}
	else 
		printf("invalid choice");
	return 0;
	}

}


