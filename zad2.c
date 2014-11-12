#include <stdio.h>
int main(){


char string[20];
printf("Podaj string\n");
scanf("%s",string);
int i;
for(i=0;i<20;i++)
{
  if(string[i]==0){
    break;
  }
  else{
if(string[i+1]==0){
printf("%c \n",string[i]);
}
else{
  printf("%c*",string[i]);
}
}
}


  return 0;
}
