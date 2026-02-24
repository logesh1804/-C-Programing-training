#include<stdio.h>



void increment(int *a,int n)
{
for(int i=0;i<n;i++){
*a+=*a+10;
}
}
int main()
{
int a=21;
int n=1;
increment(&a,n);
printf(" incremented value =%d",a);

return 0;

}

