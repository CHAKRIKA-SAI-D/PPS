#include <stdio.h>
int main()
{
    int num,sum=0;
    printf("enter the size of the array : ");
    scanf("%d",&num);
    int a[num];
    for(int i=0;i<num;i++){
    scanf("%d",&a[i]);
    }
    int *ptr=a;
    for(int i=0;i<num;i++){
        sum=sum+*ptr;
        ptr++;
    }
    printf("the sum of elements in array is : %d",sum);

    return 0;
}


output :
enter the size of the array : 4
1
2
3
4
the sum of elements in array is : 10
