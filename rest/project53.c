#include <stdio.h>

int main() {

	int birlikler,onluklar,yuzlikler, san;

	san=452;

	yuzlikler=san/100;
	onluklar=san/10;
	onluklar=onluklar%10;
	birlikler=san%10;

	printf("yuzlik %d, onluk %d birlik %d\n",yuzlikler,onluklar,birlikler);

return 0;

}
