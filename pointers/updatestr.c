#include<stdio.h>
#include<string.h>
typedef struct {
int id;
char name [5];
int marks;
}embb;

void update (embb *e){
e->id=25;
strcpy(e->name,"jann");
e->marks=100;


printf("id:%d",e->id);
printf("name %s",e->name);
printf("marks %d",e->marks);








}





int main(){
	
embb value={43,"logi",99};
embb *e=&value;


printf("id:%d",e->id);
printf("name %s",e->name);
printf("marks %d",e->marks);
update(e);
return 0;
}
