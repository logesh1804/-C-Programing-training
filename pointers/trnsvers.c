#include<stdio.h>
int main(){
int arr[8]={1,2,3,4,5,6,7};
int *p=arr;
int i;
scanf("%d",&i);
printf("*p+i:%d \np[i] :%d \n*(i+p)%d \n",*(p+i),p[i],*(i+p));
}


