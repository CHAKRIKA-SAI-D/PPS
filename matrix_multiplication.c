#include <stdio.h>

int main()
{
    int m,n;
    printf("enter the array size: ");
    scanf("%d%d",&m,&n);
    int arr[m][n];
    printf("enter the elements of first matrix : ");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int arr1[m][n];
    printf("enter the elements of second  matrix : ");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            a[i][j]=0;
            for(int k=0;k<n;k++){
           a[i][j]=a[i][j]+arr[i][k]*arr1[k][j];
        
            }
        }
    }
   printf("the matrix multiplication is : \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%5d",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}


output :
enter the array size: 2
2
enter the elements of first matrix : 2
2
2
2
enter the elements of second  matrix : 2
2
2
2
the matrix multiplication is : 
    8    8
    8    8
