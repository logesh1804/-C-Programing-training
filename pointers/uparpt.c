#include<stdio.h>
#include<string.h>
typedef struct {
int id[5];
char name [5];
int marks[5];
}embb;

//void update (embb *e){
//e->id=25;
//strcpy(e->name,"jann");
//e->marks=100;


//printf("id:%d",e->id);
//printf("name %s",e->name);
//printf("marks %d",e->marks);








//}





int main(){
	
embb value={{43,33,45,22},"logi",{99,43,47,22,33}};
embb *e=&value;
printf("name %s",e->name);

for(int i=0;i<5;i++)
	{

printf("id:%d",e->id[i]);

printf("marks %d",e->marks[i]);
	}

//update(e);
return 0;
}
