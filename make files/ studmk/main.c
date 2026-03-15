#include <stdio.h>
#include "stud.h"

int main(){
int choice;
struct st s[3];




while(1)

{

 printf("addition 1 search2 display3 Enter choice: ");
        scanf("%d",&choice);

  switch(choice)
        {
            case 1:
                addstudent(s,3);
                break;

            case 2:
                searchstudent(s,1);
                break;

            case 3:
                displaystudents(s,3);
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
return 0;
}
