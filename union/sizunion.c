#include<stdio.h>
union cont{ int a;
float b;
char c;
};

int main()
{
union cont c;
printf("enter a,b,c values");
scanf("%d""%f""%c ",&c.a,&c.b,&c.c);

printf("a value:%ld\n b value:%ld\n c value %ld",sizeof(c.a),sizeof(c.b),sizeof(c.c));

return 0;
}
