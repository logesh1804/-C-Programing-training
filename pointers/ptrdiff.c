#include<stdio.h>
int main(){
int arr[8]={1,2,3,4,5,6,7};
int *p=arr;
int i;
scanf("%d",&i);
printf("p++=%p\n",p++);
printf("*(p++)=%d",(*p)++);
return 0;
}


