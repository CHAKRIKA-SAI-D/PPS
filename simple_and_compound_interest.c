#include <stdio.h>
#include <math.h>
int main(){
float p,t,r,simple_interest,compound_interest;
printf("enter the principle amount(p) : ");
scanf("%f",&p);
printf("time and rate in percent");
scanf("%f%f",&t,&r);
simple_interest = (p*t*r)/100;
compound_interest =p*pow((1+r/100),t);
printf("the simple interest is %lf and compound  interest is %lf",simple_interest,compound_interest);
return 0;
}
