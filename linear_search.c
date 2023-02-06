#include <stdio.h>
int linear_search(char a[],int,char);
int main(){
int n;
printf("enter the size of string : ");
scanf("%d",&n);
char a[n];
printf("enter the elements : ");
for(int i=0;i<n;i++){
scanf(" %c",&a[i]);
}
char ch;
printf("enter the character : ");
scanf(" %c",&ch);
int position=linear_search(a,n,ch);
printf("%d",position);
return 0;
}
int linear_search(char a[],int n,char ch){
int i;
for( i=0;i<n;i++){
if(a[i]==ch){
return i+1;
}

}
if(i==n){
return -1;
}
}


output :
enter the size of string : 5
enter the elements : hello
enter the character : o
5
