#include <stdio.h>

int main() {

	int mekge, suw, bilet, kola, toplam;

	printf("Mekge sany(10 TMT): \n");
	scanf("%d", &mekge);

	printf("Suw sany(5 TMT): \n");
	scanf("%d", &suw);

	printf("kola sany(8 TMT): \n");
	scanf("%d", &kola);

	printf("bilet sany(15 TMT): \n");
	scanf("%d", &bilet);

	toplam=(10*mekge)+(5*suw)+(8*kola)+(15*bilet);

	printf("Sizin alan zatlarynyz: %d sany Mekge, %d sany Suw\n%d sany kola, %d sany bilet\nTolemeli pulunyz: %d TMT\n", mekge,suw,kola,bilet,toplam);
return 0;

}
