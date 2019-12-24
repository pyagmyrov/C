#include <stdio.h>
#include <stdlib.h>
int main() {

int sayi1, sayi2, toplam, ayyrmak, bolmek, kopeltmek;
printf("sayi girin: ");
scanf("%d", &sayi1);


printf("ikinji sayi girin: ");
scanf("%d", &sayi2);

toplam=sayi1+sayi2;
ayyrmak=sayi1-sayi2;
bolmek=sayi1/sayi2;
kopeltmek=sayi1*sayi2;

printf("gossan: %d\n", toplam);
printf("ayyrsan: %d\n", ayyrmak);
printf("bolsen: %d\n", bolmek);
printf("kopeltsen: %d\n", kopeltmek);
	

return 0;

}
