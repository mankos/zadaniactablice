#include <stdio.h>
#include <stdlib.h>

int main()
  {
int n=0,i,j;
printf("Podaj liczbe calkowita\n");
scanf("%d",&n);

int Macierz[n][n];
for(i=0;i<n;i++){
  for(j=0;j<i;j++){
Macierz[i][j]=Macierz[i-1][j]+Macierz[i-1][j-1];

Macierz[0][i]=0;
Macierz[0][0]=1;
Macierz[i][0]=1;
printf("%d",Macierz[i][j]);
}
}
printf("\n");
}
