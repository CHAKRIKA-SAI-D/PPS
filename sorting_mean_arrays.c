#include <stdio.h>
#include <math.h>
void mean(int a[],int);
void sorting(int a[],int);
int main(){
int n;
printf("enter the number of elements : ");
scanf("%d",&n);
int a[n];
printf("enter the elements : ");
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}
mean(a,n);
sorting(a,n);
return 0;
}
void mean(int a[],int n){
float mean=0;
for(int i=0;i<n;i++){
mean =mean+a[i];
}
printf("%f\n",(mean/n));
return ;
}
void sorting(int a[],int n){
int temp=0;
for(int i=1;i<=n-1;i++){
for(int j=0;j<n-i;j++){
if(a[j]>a[j+1]){
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
for(int i=0;i<n;i++){
printf("%d\n",a[i]);
}
return ;
}


output : 
enter the number of elements :3
enter the elements :2
1
3
3.000000
1
2
3
