#include <stdio.h>
#include <stdlib.h>

int pali(char* wyraz)
{
int d;
char odwrocony[20];

strcpy (odwrocony, wyraz);
strrev (odwrocony);

    if ( d == 0)
        return 1;

    return 0;
}

int main()
{
  char wyraz[20];
printf ("Podaj string\n");
scanf ("%s", wyraz);
printf ("%d\n", pali(wyraz));
system("PAUSE");
    return 0;
}
