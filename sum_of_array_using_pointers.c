#include <stdio.h>
int main()
{
    int num,sum=0;
    printf("enter the size of the array : ");
    scanf("%d",&num);
    int a[num];
    printf("enter the elements : ");
    for(int i=0;i<num;i++){
    scanf("%d",&a[i]);
    }
    printf("the elements are  : ");
    int *ptr=a;
    int *ptr1;
    ptr1=&a[num-1];
    for(int i=0;i<num;i++){
        printf("%5d",*(ptr+i));
    }
    printf("\nthe reverse of elements are : ");
    for(int i=num-1;i>=0;i--){
        printf("%5d",*(ptr1));
        ptr1--;
    }
    for(int i=0;i<num;i++){
        sum=sum+*ptr;
        ptr++;
    }
    printf("\nthe sum of elements in array is : %d",sum);

    return 0;
}



#output:
enter the size of the array : 5
enter the elements : 1
2
3
4
5
the elements are  :     1    2    3    4    5
the reverse of elements are :     5    4    3    2    1
the sum of elements in array is : 15
