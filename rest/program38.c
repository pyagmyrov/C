#include <stdio.h>

int main() {

	float a,b,c,d,f,g,h,i;

	printf("Cat adevar: \n");
	scanf("%f", &a);
	printf("Cat false : \n");
	scanf("%f", &b);
	printf("---------------------------------\n");
	d=120;
	g=b/3;
	c=a-g;
	h=120-(a+b);
	f=c*100/120;
	printf("Net adevarat: %f \n", c);
	printf("intrebările necompletate: %f\n", h);
	printf("%f adeverata a sters pentru \nca ai %f false\n",g,b);
	printf("Procent:  %f\n", f);

	printf("**********************************\n");
	
	if (c>50)
	{
		printf("Felicitari!, Ai trecut examenul!\n");
		printf("---------------------------------\n");

	}
	else
		printf("Pacat, nu ai trecut examenul!");
	

	
	return 0;

}
