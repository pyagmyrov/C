#include <stdlib.h>

int main() {

	int x,y,z, max;

	printf("x= ");
	scanf("%d", &x);

	printf("y= ");
	scanf("%d", &y);

	printf("z= ");
	scanf("%d", &z);

	if(x>=y){
		max=x;
	}
	else{
		max=y;
	}

	if(max>=z)
		printf ("max=%d", max);
	else
		printf("max=%d", z);
	return 0;
	



}