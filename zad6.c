#include <stdio.h>
#include <stdlib.h>
 
int palindrom(char* wyraz)
{
    char odwrocony[255];
 
    //kopiujemy wyraz do zmiennej pomocniczej
    strcpy (odwrocony, wyraz);
 
    //odwracamy wyraz
    strrev (odwrocony);
 
    //jezeli wyrazy sie zgadzaja zwroc 1
    if ( strcmp(wyraz, odwrocony) == 0)
        return 1;
 
    return 0;
}
 
int main()
{
    char wyraz[255];
 
    printf ("Podaj wyraz do sprawdzenia:\n");
    scanf ("%s", wyraz);
 
    printf ("%d\n", palindrom(wyraz));
 
    system("PAUSE");
    return 0;
}
