#include <stdio.h>
int main(){
int n;
printf("enter the size of array : ");
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}
int max=a[0],min=a[0],avg=0;
int sum=0;
for(int i=1;i<n;i++){
if(a[i]>a[0]){
max=a[i];
}
}
for(int i=1;i<n;i++){
if(a[i]<a[0]){
min=a[i];
}
}
for(int i=0;i<n;i++){
sum=sum+a[i];
}
avg=sum/n;
printf("%d\n%d\n%d",max,min,avg);
return 0;
}

