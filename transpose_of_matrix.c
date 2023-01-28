#include<stdio.h>
int n,m;
void transpose(int [m][n],int m,int n);
int main(){
printf("enter the size of rows and columns : ");
scanf("%d%d",&m,&n);
int a[m][n];
printf("enter the elements : ");
for(int i=0;i<m;i++){
for(int j=0;j<n;j++){
scanf("%d",&a[i][j]);
}
}
transpose(a,m,n);
return 0;
}
void transpose(int a[m][n],int m,int n){
int c[m][n];
for(int i=0;i<m;i++){
for(int j=0;j<n;j++){
c[i][j]=a[j][i];
}
}
for(int i=0;i<m;i++){
for(int j=0;j<n;j++){
printf("%5d",c[i][j]);
}
printf("\n");
}
return;
}


#output : 
enter the size of rows and columns : 2
2
enter the elements : 1
2
3
4
    1    3
    2    4
