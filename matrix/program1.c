#include <stdio.h>

int main() {

	int matris1[2][3]={10,20,30,40,50,60},i,j;
	int matris2[2][3]={1,2,3,4,5,6};
	int toplam[2][3],k,l;



	for(i=0;i<2;i++){
	for(j=0;j<3;j++){
		toplam[i][j]=matris1[i][j]+matris2[i][j];
	}
	}

	for(k=0;k<2;k++){
	for(l=0;l<3;l++){
		printf("%d ",toplam[k][l]);
	}
	printf("\n");
	}




return 0;

}