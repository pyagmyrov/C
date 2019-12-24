#include <stdio.h>

int main() {

int a,b,c;

printf("1-5 sagat, 6 manat\n5-10 sagat 5 manatdan\n10+ sagat 4  manatdan\n");
printf("Nace sagat goyjak?\n");
scanf("%d", &a);

if(a>=1 && a<=5){
 printf("%d sagat goymak ucin %d manat tolemeli",a,a*6);
}

if(a>5 && a<=10){
 printf("%d sagat goymak ucin %d manat tolemeli",a, a*5);
}

if(a>10){
 printf("%d sagat goymak ucin %d manat tolemeli",a, a*4);
}


return 0;

}
