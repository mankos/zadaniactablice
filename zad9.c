#include <stdio.h>
#include <string.h>
char gra[5]={"gra"};
char slowo[255];
int zab(char* gra,char* slowo){
if(strcmp(gra, slowo) == 0){
  printf("gra dziala");
  return 1;
}
}

int main(){
scanf("%s",slowo);
zab(gra,slowo);
printf("%d",zab(gra,slowo));
return 0;
};
