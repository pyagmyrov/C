#include <stdio.h>

int main() {

int a,b,c;

printf("Examenul 1: ");
scanf("%d", &a);

printf("Examenul 2: ");
scanf("%d", &b);	

c=(a+b)/2;

if (c>=50){
	printf("Ortalamang %d, Egzamindan gecding!\n", c);
}

else {
printf("Ortalamang %d, egzamindan gecmeding!\n",c);
}

return 0;

}
