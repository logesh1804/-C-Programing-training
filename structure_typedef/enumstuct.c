#include<stdio.h>
enum status{
off,on};
typedef struct {

	int diviceid;
	enum status status;
}divice;
int main()
{
divice d1;
d1.diviceid=101;
d1.status=on;

printf("divice id%d\n",d1.diviceid);
if (d1.status==on)
printf("divice status :on\n");
else
printf("divices status:off\n");
return 0;
}

