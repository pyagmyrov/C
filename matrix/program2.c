#include <stdio.h>

int main() {

int i,j,a,b,c;

printf("setir: \n");
scanf("%d",&a);

printf("sutun: \n");
scanf("%d",&b);

int m1[a][b];

for(i=0;i<a;i++){

	for(j=0;j<b;j++){
	printf("[%d][%d]: ",i+1,j+1);
	scanf("%d",&m1[i][j]);
	}

}
for(i=0;i<a;i++){

	for(j=0;j<b;j++){
	printf("%d ", m1[i][j]);

	}
	printf("\n");
}

return 0;

}
