#include <stdio.h>

int main() {

	int gun;

	printf("\ngunun sanyny girizing: \n");
	scanf("%d", &gun);

	switch(gun){

		case 1: printf("Dushenbe\n"); break;
		case 2: printf("Sishenbe\n"); break;
		case 3: printf("Charshenbe\n"); break;
		case 4: printf("Penshenbe\n"); break;
		case 5: printf("Anna\n"); break;
		case 6: printf("Shenbe\n"); break;
		case 7: printf("Yekshenbe\n"); break;
		default: printf("Hepdede 7 gun bar kelesang!\n");
	}

return 0;

}
