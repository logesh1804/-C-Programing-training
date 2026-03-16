#include<stdio.h>
#include"file_ops.h"
int main(){
	char filename[50];
	char mode;

	printf("enter a file name : ");
	scanf("%s",filename);

	printf("enter a mode=");
	scanf(" %c", &mode);
	if(mode== 'w')
		write_file(filename);
	else if(mode=='r')
		read_file(filename);
	else 
		printf("invalid mode \n");
	return 0;
}
