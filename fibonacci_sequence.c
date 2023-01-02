#include <stdio.h>
int main(){
int a=0,b=1;
int c;
int n;
printf("enter the number : ");
scanf("%d",&n);
for(int i=3;i<=n;i++){
c=a+b;
printf("\n%d",c);
a=b;
b=c;
}
return 0;
}

