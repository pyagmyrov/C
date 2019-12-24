#include <stdio.h>

int main() {

	int a,b;

	printf("Intra primul numar: \n");
	scanf("%d", &a);

	printf("Intra a doua numar: \n");
	scanf("%d", &b);

	a>b ? printf("%d este Max numar\n", a) : printf("%d este Max Numar\n",b);
return 0;

}
