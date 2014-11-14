#include <stdio.h>
int main(){
/*
int tab[4][10];
int i,j;
for(i=0;i<4;i++){
for(j=0;j<10;j++){
tab[i][j]=1;
printf("%d\t",tab[i][j]);
if(j==9){
  printf("\n");
}
}
}
*/
//ZADANIE B
/*
int tab[4][10];
int i,j;
for(i=0;i<4;i++){
for(j=0;j<10;j++){
  tab[0][j]=1;
  tab[1][j]=2;
  tab[2][j]=3;
  tab[3][j]=4;
printf("%d\t",tab[i][j]);
if(j==9){
  printf("\n");
}
}
}
*/
//ZADANIE C
/*
int tab[5][11];
int i,j;
for(i=0;i<5;i++){
for(j=0;j<11;j++){
  if(i>0 && j>0){

  tab[i][j]=i*j;
printf("%d\t",tab[i][j]);
if(j==10){
  printf("\n");


}
}
}
}
*/
//ZADANIE D
int tab[4][10];
int i,j,c=0;
for(i=0;i<4;i++){
for(j=0;j<10;j++){
  tab[i][j]=++c;
printf("%d\t",tab[i][j]);
if(j==9){
  printf("\n");
}
}
}


  return 0;
}
