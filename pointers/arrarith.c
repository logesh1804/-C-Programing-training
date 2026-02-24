#include<stdio.h>
int main(){
int arr[8]={1,2,3,4,5,6,7};
int *p=arr;

for(int i=0;i<8;i++){
printf ("array elements %d ",*(p+i));
}
}
