#include<stdio.h>
void inputarr(int arr[],int n)
{
 for(int i=1;i<n;i++)
{
scanf("%d",&arr[i]);
}
}
void printarr(int arr[],int n)
{
for(int i=0;i<n;i++)
{
printf("%d",arr[i]);
}
{
printf(" \n");
}
}

int main(void)
{
int arr[10];
int n;
printf("enter number of element ");
scanf("%d",&n);
inputarr(arr,n);

printf("array elemens are");
printarr(arr,n);
 return 0;
}

