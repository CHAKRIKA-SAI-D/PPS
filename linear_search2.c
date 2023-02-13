#include <stdio.h>
void linear_search(int [],int,int);
int main(){
int n;
printf("enter the size of the array : ");
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}
int key;
printf("enter the key : ");
scanf("%d",&key);
linear_search(a,n,key);
return 0;
}
void linear_search(int a[],int n,int key){
for(int i=0;i<=n;i++){
if(a[i]==key){
printf("the position ofkey is %d",i+1);
}
else if(n==i){
printf("key not found!!");
}
}
return ;
}


output:
enter the size of the array : 3
1
  2
  3
enter the key : 3
position of the key is : 3
