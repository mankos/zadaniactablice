#include <stdio.h>
#include <string.h>
char l1[255];
char l2[255]={ "supertajnehaslo" };
int CzyToSamo(char* l1,char* l2){
if(strcmp(l1, l2) == 0){
  return 1;
}
else{
  return 0;
}
}
int main() {
printf("Podaj haslo \n");
scanf("%s",l1);
if(CzyToSamo(l1,l2) == 1){
  printf("Zalogowano do super tajnego systemu\n");
}
else{
  printf("Bledne haslo\n");
}
  return 0;
}
