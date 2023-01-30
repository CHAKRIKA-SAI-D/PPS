#include <stdio.h>
int main(){
int n;
printf("enter the size: ");
scanf("%d",&n);
int a[n];
printf("enter the elements : ");
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}
int *ptr=a;
for(int i=0;i<n;i++){
printf("%5d",*ptr);
}
return 0;
}


output : 
enter the size : 5
enter the elements : 1
2
3
4
5
 1  2  3  4  5
