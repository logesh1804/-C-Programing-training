#include<stdio.h>
typedef struct {
 char city[20];
 int pincode;
}adress;
typedef struct  
{
int roll;
float marks;
adress addr;
}student;
int main()
{
student s1;
printf("enter roll no : \n marks: \n city:adress\n pincode:");
scanf("%d",&s1.roll);
scanf("%f",&s1.marks);
scanf("%s",s1.addr.city);
scanf("%d",&s1.addr.pincode);

printf("student details\n roll no %d\n marks %.2f\n city %s\n pincode %d ",s1.roll,s1.marks,s1.addr.city,s1.addr.pincode);
return 0;d1
}
