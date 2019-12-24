#include <stdio.h>

int main() {


int a;
printf("\n\nKitap 1-i 5 manatdan\n10dan kop alsan 4 manatdan\n20 den kop alsang 3 manatdan\n30 dan kop alsan 2 manatdan\n********************\n\n");
printf("Nache kitap aljak?\n");
scanf("%d", &a);

printf("Sen %d sany kitap aldyng\nJemi toleg: %d manat", a, a*5);

if(a>=10 && a<=20){

	printf("Sen %d sany kitap aldyng\n Sana bir kitap 4 manatdan \n Jemi toleg: %d manat", a, a*4);

}


if(a>=20 && a<=30){

	printf("Sen %d sany kitap aldyng\n Sana bir kitap 3 manatdan \n Jemi toleg: %d manat", a, a*3);
}

if(a>=30){

	printf("Sen %d sany kitap aldyng\n Sana bir kitap 2 manatdan \n Jemi toleg: %d manat", a, a*2);
}

return 0;

}
