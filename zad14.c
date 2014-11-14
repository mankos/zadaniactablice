#include <stdio.h>
#include <math.h>
int main()
{
char tyg[7][20]=
{
{"Poniedzialek"},
{"Wtorek"},
{"Sroda"},
{"Czwartek"},
{"Piatek"},
{"Sobota"},
{"Niedziela"}
};
int a;
printf("Podaj warosc w przedziale od 1 do 7\n");
scanf("%d",&a);
if (a==1)
  {
    printf("Podany dzien to %s",tyg[0]);
  }
else if (a==2)
  {
    printf("Podany dzien to %s",tyg[1]);
  }
else if (a==3)
  {
    printf("Podany dzien to %s",tyg[2]);
  }
else if (a==4)
  {
    printf("Podany dzien to %s",tyg[3]);
  }
else if (a==5)
  {
    printf("Podany dzien to %s",tyg[4]);
  }
else if (a==6)
  {
    printf("Podany dzien to %s",tyg[5]);
  }
else if (a==7)
  {
    printf("Podany dzien to %s",tyg[6]);
  }

else
  {
    printf("Podano zły przedział liczbowy");
  }
return 0;
}
