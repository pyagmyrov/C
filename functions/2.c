#include <stdio.h>

void salam(int a){
	printf("Error %d",a);
}

int main() {

	printf("Iki nomer giriz: ");
	int b;
	scanf("%d",&b);

	if(b<0){
		salam(404);
	}
	else
		printf("Kongrats!");


return 0;

}
