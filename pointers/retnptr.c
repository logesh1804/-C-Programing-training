#include<stdio.h>
int c,d,q,r;

int sumdif(int *a,int *b){


c=*a-*b;
d=*a+*b;
q=*a/(*b);
r=*a%*b;


}



int main(){
int a=25;
int b=30;
sumdif(&a,&b);
printf ("dif:%d sum: %d",c,d);

printf ("quetiont %d,remainder:%d",q,r);
return 0;
}
