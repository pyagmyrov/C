#include <stdio.h>
#include <stdlib.h>


int goshmak (int a, int b){
	return a+b;
}


int main() {
int x,y;
printf("Iki sany nomer giriz: ");
scanf("%d%d",&x,&y);
printf("%d + %d = %d",x,y,goshmak(x,y));

return 0;

}
