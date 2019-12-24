#include <stdio.h>

int main() {
int i=1,n,a,b,c,d;
int v[a];
n=0;
a=1;

while(1){
	
	printf("san giriz: ");

	scanf("%d", &v[a]);
	c=v[a];
	n=n+v[a];
	printf("san giriz: ");
	scanf("%d", &v[a]);
	b=v[a];
	n=n+v[a];
	i++;

	if(c==b){
		break;
	}
	d=n/(i+1);
}
printf("%d",d);

return 0;

}
