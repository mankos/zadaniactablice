#include <stdio.h>
int main(){


char string[20];
int znaki;
printf("Podaj string\n");
scanf("%s",string);
int i;
for(i=0;i<20;i++){
znaki++;
if(string[i+1]==0){
  break;
}
}
printf("Ilośc znaków to %d ",znaki);
  return 0;
}
