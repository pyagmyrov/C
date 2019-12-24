#include <stdio.h>

int main() {

int n,a,b,c,i;
b=0;

printf("Nace sanda ishlejek? ");
scanf("%d", &n);

int v[n];
for(i=0;i<n;i++){
printf("%d nji sany giriz: ", i+1);
scanf("%d", &a);
b=b+a;


}

printf("jogap: %d", b);
return 0;

}



