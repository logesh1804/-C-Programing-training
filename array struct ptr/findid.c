#include<stdio.h>
typedef struct  {
int id;
char name[20];
}student;


void iptstudent(student *s){
for (int i=0;i<5;i++){

printf("enter id then name");
scanf("%d %s",&s[i].id,s[i].name);
}
}
void findid(student s[]){
int find;
{ printf("enter if for findingg");
scanf("%d",&find);
for(int i=0;i<5;i++){
if(s[i].id ==find)
{
printf("id%dname:%s",s[i].id,s[i].name);
}


}
}
}
int main(){
student s[5];
iptstudent(s);
findid(s);
return 0;
}
