#include <stdio.h>
#include <stdlib.h>
int main(){
FILE *fp;
char ch;
fp=fopen("fir.txt","w+");
if(fp==NULL){
printf("not found!!");
exit(1);
}
else
{
while((ch=getchar())!='\n')
{
fputc(ch,fp);
}
while((ch=fgetc(fp))!=EOF)
{
printf("%c",ch);

fclose(fp);}
}

return 0;
}

output : 
chakrika

-> it will create a file of name fir and store the data u are giving
