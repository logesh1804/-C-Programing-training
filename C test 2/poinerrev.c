#include<stdio.h>






void rev (int *p,int n){
int ar[n+1];
int *r=ar;
for(int i=0;i<=n;i++){
*(r+(n-i))=*(p+i);
}
for(int i=0;i<=n;i++){

printf("%d ",*(r+i));

}
}



int main()
{
printf("enter array value ");
int n;
scanf("%d",&n);
int arr[n];
int *p=arr;
for(int i=0;i<n;i++)
{scanf("%d",&arr[i]);
}
rev(arr,n-1);
return 0;

}




