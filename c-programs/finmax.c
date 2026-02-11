#include<stdio.h>
int findmax(int arr[],int n)
{
	int max=arr[0];
	for(int i=1;i<n;i++)
	 {
     		if(arr[i]>max)
		max=arr[i];
		}
return max;
}
int main(void)
{ 
  int arr[10];
int n,max;
printf("enter the no of element ");
scanf("%d",&n);
printf("enter array  elements");
for (int i=0;i<n;i++)
{
scanf("%d",& arr[i]);
}
max=findmax(arr,n);
printf("maximum element %d",max);

return 0;
}
