#include <stdio.h>
int main(){
int n1,n2,count=0;
printf("enter the numbers :");
scanf("%d%d",&n1,&n2);
for(int i=n1+1;i<n2;i++){
for(int j=2;j<i;j++){
if(i%j==0){
count++;
}
}
if(count==0){
printf("%d\n",i);
}
count=0;
}
return 0;
}
