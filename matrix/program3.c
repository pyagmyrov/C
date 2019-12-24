#include <stdio.h>

int main() {

	int a,b,c,d;
	printf("setir: ");
	scanf("%d",&a);
	printf("sutun: ");
	scanf("%d",&b);
	int sum[100][100],m1[100][b],m2[100][100];
	printf("\nBirinji Matrix: \n");
	for(c=0;c<a;c++){
		for(d=0;d<b;d++){
			printf("[%d][%d]: ",c+1,d+1);
			scanf("%d", &m1[c][d]);
		}
	}
	printf("\nIkinji Matrix: \n");
	for(c=0;c<a;c++){
		for(d=0;d<b;d++){
			printf("[%d][%d]: ",c+1,d+1);
			scanf("%d", &m2[c][d]);
		}
	}
	for(c=0;c<a;c++){
		for(d=0;d<b;d++)
		{
			sum[c][d]=m1[c][d]+m2[c][d];
		}
	}
for(c=0;c<a;++c){
		for(d=0;d<b;++d){
			printf("%d ",sum[c][d]);
		}
		printf("\n");

		}
	return 0;
}
