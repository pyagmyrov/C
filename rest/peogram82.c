#include <stdio.h>

int main() {

int d1,d2;
char op;


do{
	scanf("%d %c %d", &d1,&op,&d2);
	switch(op){
		case '+':
		printf("Salam\n");
		break;
		case '-':
		printf("Salamma\n");
		break;
		default : printf("Invalid\n");
	

};
}
while(op != 'q');


}
