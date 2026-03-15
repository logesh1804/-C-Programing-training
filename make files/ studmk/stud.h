#ifndef STUD_H
#define STUD_H

struct st
{   int id;
    char name[50];
    float marks;
};
void addstudent(struct st s[],int n );
void searchstudent(struct st s[],int n );
void displaystudents(struct st[],int n);


#endif
