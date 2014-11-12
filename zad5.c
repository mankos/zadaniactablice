#include <stdio.h>
int main(){
char lancuch[20];
printf("Podaj lancuch znakow");
scanf("%s",&lancuch);
int i;
for (i=0;i<20;i++){
printf("%c",lancuch[i]);
}
return 0;
}
