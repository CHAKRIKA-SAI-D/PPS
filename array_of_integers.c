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
printf("max is : %d\n min is : %d\n average is : %d",max,min,avg);
return 0;
}

# output :
enter the size of array : 5
1
2
3
4
5
max is : 5
 min is : 1
 average is : 3
