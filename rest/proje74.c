#include <stdio.h>

int main() {

int a,b,c;

printf("Intra primul numar: \n");
scanf("%d", &a);

printf("Intra a doua numar: \n");
scanf("%d", &b);

printf("Intra a trei numar: \n");
scanf("%d", &c);

if(a>b && a>c){
	printf("%d este max numar\n", a);
}
if(b>a && b>c){
	printf("%d este max numar\n", b);
}

if(c>a && c>b){
	printf("%d este max numar\n", c);
}



return 0;

}
