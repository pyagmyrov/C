#include <math.h>

int main(){

	int x,y;

printf("x=");
scanf("%d", &x);

printf("y=");
scanf("%d", &y);

if(x>0 && y>0){

printf("aria dreptunghilui este: %d\n", x*y);
printf("perimetrul dreptunghilui este: %d\n",(2*x)+(2*y));
}
else {
	printf("numar e negatif\n"); 
}
return 0;

}