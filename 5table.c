#include <stdio.h>
int main(){
int num,i=1;
printf("enter the number : ");
scanf("%d",&num);
int n;
printf("enter last number : ");
scanf("%d",&n);
while(i<=n){
printf("%d x %d =%d\n",num,i,i*num);
i++;
}
return 0;
}
