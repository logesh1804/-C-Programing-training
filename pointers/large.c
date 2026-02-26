include<stdio.h>
int main() {
int arr[]={1,2,3,4,5,6,7,8};
int *a=arr;





  int n = sizeof(arr)/sizeof(arr[0]);
    int i, j, temp;


    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(*(a+j) > *(a+(j+1))) {
                temp = *(a+j);
                *(a+j) = *(a+(j+1));
                *(a+(j+1)) = temp;
            }
        }
    }
 printf ("largest value %d smalest value %d ",*(a+n-1),*a);
 return 0;

}
