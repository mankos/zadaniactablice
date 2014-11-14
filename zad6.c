#include <stdio.h>
char string[20];
int dlugosc(char* string){ //funkcja liczaca dlugosc
int znaki=0;
int i;
for(i=0;i<20;i++){
znaki++;
if(string[i+1]==0){
break;
}
}
return znaki;
}                       //koniec funkcj liczacej dlugosc
int main(){
printf("Podaj znaki\n");
scanf("%s",string);
int d,i=0,t=0,n=0;
d=dlugosc(string);

while(d!=0){      //aż dlugosc stringa nie będzie różna od zera
d--;              //dekrementacja sluzaca porownywaniu
printf("%c ",string[d]);    //wyswietl string
if(string[d]==string[i]){   //jezeli string z d jest rowny stringowi z i (ostatni z pierwszm)
t++;                        //zwieksz wartosc t(tak)
}
else{                       //jezeli nie
n++;                        //zwieksz n(nie)
}
i++;                        //inkrementacja i w celu porownania
}
if(t>=n){                    //sprawdzenie czy wiekszosc liter sie zgadza
  printf("podany wyraz jest palidromem");  // jezeli tak palidrom
}
else{
  printf("podany wyraz nie jest palidromem"); // jezeli nie to nie ;)
}

printf("\n");
return 0;
}
