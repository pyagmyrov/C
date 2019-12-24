#include <stdio.h>

int main() {

	int sayi1,sayi2,jogap,jogap2,saylaw,saylaw2;


	printf("\nMatematika menyusy:\n\n");
	printf("*******************\n\n");
	printf("1-Kwadradyn perimetrini we meydany\n");
	printf("2-Girilen sanyn kuby\n");
	printf("3-Towereging perimetri we meydany\n");
	printf("4-5x2+7x+9 x-e gora mysalyn jogaby\n");
	printf("5-Goniburclygyn perimetri we meydany\n");
	printf("Name etjek?\n\n");
	scanf("%d",&saylaw);

	switch(saylaw){
		case 1: printf("Kwadradyng Perimetrini(1) tapjakmy ya Meydanyny(2)?\n ");
				scanf("%d", &saylaw2);
				printf("Kwadradyng gyrasy nace sm? ");
				scanf("%d",&sayi1);
				switch(saylaw2){
					case 1: jogap=sayi1*4;
					printf("Kwadradyng Perimetri %d santimetr", jogap);
					case 2: jogap=sayi1*sayi1;
					printf("Kwadradyn meydany %d santimetr", jogap);break;
				}break;
		case 2: printf("San giriz: ");
				scanf("%d", &sayi1);
				jogap=sayi1*sayi1*sayi1;
				printf("Sanyng Kuby %d", jogap); break;

		case 3: printf("Towereging radiusyny giriz:\n ");
				scanf("%d", &sayi1);
				jogap=2*3.14*sayi1;
				jogap2=2*3.14*sayi1*sayi1;

				printf("Towereging perimetri: %d, Meydany: %d",jogap, jogap2); break;

		case 4: printf("san giriz: ");
				scanf("%d", &sayi1);
				jogap=4-5*sayi1*7*sayi1+9;
				printf("Jogaby: %d", jogap); break;

		case 5: printf("Goniburclygyn Perimetrini(1) tapjakmy ya Meydanyny(2)?\n ");
				scanf("%d", &saylaw2);
				printf("Goniburclygyn boyy nace sm? ");
				scanf("%d",&sayi1);
				printf("Goniburclygyn uzynlygy nace sm? ");
				scanf("%d",&sayi2);
				switch(saylaw2){
					case 1: jogap=sayi1+sayi1+sayi2+sayi2;
					printf("Kwadradyng Perimetri %d santimetr", jogap); break;
					case 2: jogap=sayi1*sayi2;
					printf("Kwadradyn meydany %d santimetr", jogap);break;
				}

	}




	
	return 0;
	}	



