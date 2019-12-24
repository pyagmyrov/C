 #include <stdio.h>

int main() {

int factor=1;
int i,c;

printf("Nacan faktoryalyny tapayyn? \n");
scanf("%d", &c);

for(i=1; i<=c;i++){
	factor=factor*i;
}

printf("%d sanyn faktoryaly %d", c,factor);

return 0;

}
