#include <stdio.h>
void switchcase(int,int [],int);
void sum(int [],int);
void small(int [],int);
void large(int[],int);
void avg(int [],int);
int main(){
int n;
printf("enter the size of the array : ");
scanf("%d",&n);
int a[n];
printf("enter the elements : ");
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}
int choice;
printf("enter choice : (1-sum\n2-small\n3-large\n4-avg)");
scanf("%d",&choice);
switchcase(choice,a,n);
return 0;
}
void switchcase(int choice,int a[],int n){
switch(choice){
case 1 :sum(a,n);
break;
case 2 : small(a,n);
break;
case 3 : large(a,n);
break;
case 4 : avg(a,n);
break;
default:printf("invalid choice!!");
}
return;
}
void sum(int a[],int n){
int sum=0;
for(int i=0;i<n;i++){
sum=sum+a[i];
}
printf(" the sum is :%d",sum);
return;
}
void small(int a[],int n){
int small=a[0];
for(int i=1;i<n;i++){
if(a[i]>small){
small=a[i];
}
}
printf("the small is : %d",small);
return;
}
void large(int a[],int n){
int large =0;
for(int i=0;i<n;i++){
if(a[i]>large){
large=a[i];
}
}
printf("the large is : %d",large);
return;
}
void avg(int a[],int n){
float avg=0;
int sum=0;
for(int i=0;i<n;i++){
sum=sum+a[i];
}
avg=sum/n;
printf("the avg is : %f",avg);
return;
}


output :
enter the size of the array : 3
enter the elements : 1
  2
  3
enter choice : (1-sum
2-small
3-large
4-avg) 2
the small is : 1
