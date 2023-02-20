#include <stdio.h>
#include<stdlib.h>
int main(){
FILE *fp1,*fp2;
char ch;
fp1=fopen("fir.txt","r");
fp2=fopen("sec.txt","w");
if(fp1==NULL){
printf("not found");
}
else{
while((ch=fgetc(fp1))!=EOF){
fputc(ch,fp2);
}
fclose(fp1);
fclose(fp2);
fp2=fopen("sec.txt","r");
while((ch=fgetc(fp2))!=EOF){
ch=ch-32;
printf("%c",ch);
}
}
fclose(fp2);
return 0;
}

-> it will convert lower case to upper case letters 
