#include <stdio.h>
void main(){
int integer=100;
short int integer1=10000;
long int integer2=100000;
printf("%d\n%d\n%ld\n",integer,integer1,integer2);
float floating=10.0;
double floating1=1000.111;
long double floating2=10000.1234567;
char ch='a';
printf("%f\n%f\n%Lf\n",floating,floating1,floating2);
printf("%c\n",ch);
return;
}

