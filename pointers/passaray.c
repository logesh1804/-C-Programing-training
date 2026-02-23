#include<stdio.h>

void array(int *arr){
for(int i=0;i<3;i++)
{
printf("aray value %d/n",*(arr+i));
}
}

int main(){
int arr[5]={1,2,3,4,5,};
array(arr+1);

return 0;
}
