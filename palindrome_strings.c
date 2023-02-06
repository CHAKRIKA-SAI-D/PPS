#include <stdio.h>

int main(){
    char string1[20];
    int i, length=0;
    int flag = 0;
    
    printf("Enter a string:");
    scanf("%s", string1);
    for(int j=0;string1[j]!='\0';j++) {
        length++;
    }

    for(i=0;i < length ;i++){
        if(string1[i] != string1[length-i-1]){
            flag = 1;
            break;
           }
        }
    
    if (flag==1) {
        printf("%s is not a palindrome", string1);
    }    
    else {
        printf("%s is a palindrome", string1);
    }
    return 0;
}

output :
Enter a string:madam
madam is a palindrome
