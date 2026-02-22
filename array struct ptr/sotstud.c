#include<stdio.h>
typedef struct{int roll;float marks;}student;

void sortstudents(student arr[] ){
	int i,j;
student temp;

for(i=0;i<4;i++){
for(j=0;j<4-i;j++){
if(arr[j].marks>arr[j+1].marks){
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}


printf("Sorted array: ");

for(i=0;i<5;i++){

printf("Roll: %d  Marks: %.2f\n", arr[i].roll, arr[i].marks);
}
}

int main()
{ 
student s[5];

int i;
int topindex=0;
for(i=0;i<5;i++)
{
printf("\nenter roll  no");
scanf("%d",&s[i].roll);
printf("enter a marks\n");
scanf("%f",&s[i].marks);
}
for (i=1;i<5;i++)
{
if(s[i].marks > s[topindex].marks)
{topindex=i;
}
{
//printf("toper details roll no:%d and mark is %.2f",s[topindex].roll, s[topindex].marks);
}
}
sortstudents(s);

return 0;

}
