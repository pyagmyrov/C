#include <stdio.h>

int main() {

	int a,b,c,d,i;
	a=1;
	b=1;
	printf("Nacinji elementine chenli gorkezsin? \n");
	scanf("%d",&d);

	for(i=1;i<=d;i++){
		c=a+b;
		a=b;
		b=c;
		
	}
		printf("Fibonaching %d nji elementi %d\n", d, c);
return 0;

}
