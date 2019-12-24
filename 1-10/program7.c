#include <stdio.h>
#include <stdlib.h>

int main()  {

char ady[20];
char familya[30];
char yasy[2];
char isi[15];
char yasa[10];



printf("Adyny yaz: ");
scanf("%s", ady);


printf("Familyany yaz: ");
scanf("%s", familya);

printf("Nace yasynda?: ");
scanf("%s", yasy);

printf("Name ishleyan?: ");
scanf("%s", isi);

printf("nirde yasayan?: ");
scanf("%s", yasa);


printf("\n\n");
printf("******* M A G L U M A T ********");
printf("\n\n");

printf(" Ady: %s\n familyasy: %s\n yasy: %s\n Is yeri: %s\n Yasayan Yeri: %s\n", ady,familya,yasy,isi,yasa);


return 0;

}