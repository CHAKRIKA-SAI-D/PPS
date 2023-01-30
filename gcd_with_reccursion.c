#include<stdio.h>
int GCD(int,int);
int main(){
int small,large;
printf("Enter two numbers");
scanf("%d%d",&small,&large);
int result;
result=GCD(small,large);
printf("Greatest Common Divisior:%d",result);
return 0;
}
int GCD(int small,int large){
    if(small<large){
        return GCD(large,small);
    }
if(large==0){
    return small;
}
return GCD(large,small%large);
}


output :
Enter two numbers5
1
Greatest Common Divisior:1
