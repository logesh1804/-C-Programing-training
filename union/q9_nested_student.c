#include<stdio.h>

struct Address{
char city[50];
int pincode;
};

struct Student{
int id;
char name[50];
struct Address addr;
};

int main(){
struct Student s;
printf("Enter id and name: ");
scanf("%d%s",&s.id,s.name);
printf("Enter city and pincode: ");
scanf("%s%d",s.addr.city,&s.addr.pincode);

printf("ID: %d\n",s.id);
printf("Name: %s\n",s.name);
printf("City: %s\n",s.addr.city);
printf("Pincode: %d\n",s.addr.pincode);

return 0;
}