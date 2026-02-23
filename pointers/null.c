#include<stdio.h>
int main(){
	
	int b=10;


int *a=NULL;
a=&b;
if(a==NULL){
printf("empty");
}

else
{printf("%d",*a);
}
return 0;
}

