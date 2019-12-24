#include <stdio.h>

int main() {

	int a,b,c,d;

printf("Intra primul numar: \n");
scanf("%d", &a);

printf("Intra a doua numar: \n");
scanf("%d", &b);
c=(a+b)*2;
d=a*b;

if (a<0 || b<0)
{
	printf("hahhahaha");
}

if (a>0 && b>0){

	printf("Perimetrul :%d\n", c );
	printf("Aria :%d\n ", d);
}

return 0;

}
