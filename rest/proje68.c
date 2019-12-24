#include <stdio.h>
#include <math.h>


int main() {
int a,b,c,d,e,g;
double f;

printf("Prima parte: \n");
scanf("%d", &a);

printf("a doua parte: \n");
scanf("%d", &b);

printf("Prima parte: \n");
scanf("%d", &c);

d=(a+b+c)/2;
e=d*(d-a)*(d-b)*(d-c);

f=sqrt(e);

printf("Perimetru: %d\n", d*2);
printf("Aria: %f\n", f);

return 0;

}

