#include <stdio.h>
char string[20];
int dlugosc(char* string){
int znaki=0;
int i;
for(i=0;i<20;i++){
znaki++;
if(string[i+1]==0){
  break;
  }
}
return znaki;
}
int main(){
printf("podaj znaki\n");
scanf("%s",string);
printf("dlugosc tego stringu to %d \n",dlugosc(string));
  return 0;
}
