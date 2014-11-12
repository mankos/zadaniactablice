#include <stdio.h>
int p=20;
char string[p];
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
printf("Podaj znaki\n");
scanf("%s",string);
int d;
d=dlugosc(string);
while(d!=0){
d--;
  printf("%c",string[d]);
}
printf("\n");
  return 0;
}
