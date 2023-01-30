#include <stdio.h>
void fact(int);
int main(){
int n;
printf("enter the number : ");
scanf("%d",&n);
fact(n);
return 0;
}
void fact(int n){
int res=1;
for(int i=1;i<=n;i++){
res=res*i;
}
printf("%d",res);
return ;
}


