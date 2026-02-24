#include<stdio.h>
int max=0;
int i;
 void findmax(int *a ){

for ( i=1;i<4;i++){
if(*(a+max)<(*(a+i))){
      max=i;
}
}
}




int main(){
int arr[]={1,2,43,5,6};
findmax(arr);
printf("max value=%d", *(arr+max));
return 0;
}

