#include<stdio.h>
union uni {
int a;
float b;
char c;
};
typedef struct { int d;
union uni e;
}stut;

void ipt(stut *p)

{ 
printf ("enter value for d then a:\n");
scanf("%d",&p->d);
scanf("%d",&p->e.a);
(p->e.b)=40.4;
}

int main(){
stut s1;
 ipt(&s1);
printf("%d\n",s1.d);
printf("%d",s1.e.a);
printf("%.2f",s1.e.b);

return 0;
}



