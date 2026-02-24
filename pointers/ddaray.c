#include<stdio.h>
int main(){
int arr[2][7]={{1,2,3,4,5,6,7},{0,8,6,0,3,2,1}};
int *p=&arr[0][0];
int i,j;
printf("enter i and  j values ");
scanf("%d %d ",&i,&j);
printf ("%d",(*(p[j])+i));
return 0;
}
