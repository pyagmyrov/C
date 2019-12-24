#include <stdio.h>

int main() {

char kitapad[14];
char Yazar[15];
char sayfa[3];
char yyly[5];
char basimev[15];
char tur[15];

printf("Kitabyn ady: ");
scanf("%s",kitapad);

printf("Kim Yazdy?: ");
scanf("%s",Yazar);

printf("Nace sayfa?: ");
scanf("%s",sayfa);

printf("hacan cykdy?: ");
scanf("%s",yyly);

printf("kim tarabyndan?: ");
scanf("%s",basimev);

printf("temasy name?: ");
scanf("%s",tur);

printf("\n\n");
printf("****** M A G L U M A T ********");
printf("\n\n");
printf("Kitabyn ady :%s\nYazyjy: %s\nsayfa sany: %s\nCykan wagty: %s\nCaphana: %s\nTemasy: %s\n", kitapad, Yazar, sayfa, yyly, basimev, tur);
printf("\n\n");

}