#include <stdio.h>
#include <math.h>
int main(){
int x=1,n,i=0;
int sum=0;
printf("enter the number n and power x:");
scanf("%d%d",&n,&x);
while(i<=x){
sum=sum+pow(n,i);
i=i+1;
}printf("%d",sum);
return 0;
}


# output : 
enter the number n and power x:5
3
156
