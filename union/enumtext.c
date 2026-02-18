#include<stdio.h>
enum unit {
temp,presure,humidity};

typedef struct
 {int value;
  enum unit unit;
}sensor; 

const char *unitnames[]=
{
"temp",
"presure",
"humidity"

};
int main()
{
sensor s1;
s1.value =45;
s1.unit =presure;
printf("sensor value: %d\n",s1.value);
if(s1.unit>=temp&&s1.unit<=humidity)
{
printf("sensor type:%s\n",unitnames[s1.unit]);
}
else
{
printf("invalid sensor type\n");
}
return 0;
}
