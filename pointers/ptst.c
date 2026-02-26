#include<stdio.h>
#include<string.h>
typedef struct {
int id;
char name [5];
int marks;
}embb;


int main(){
	
embb value={43,"logi",99};
embb *e=&value;



printf("id:%d",e->id);
printf("name %s",e->name);
printf("marks %d",e->marks);

return 0;
}
