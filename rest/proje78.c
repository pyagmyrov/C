#include <stdio.h>

int main() {

	int i,n,max,min;
	printf("nace san bilen ishleshjek? ");
	scanf("%d", &n);
	int v[n];

	for(i=0;i<n;i++){
	scanf("%d", &v[i]);
	}

max= v[0];min = v[0];
for(i=0;i<n;i++){
if(max < v[i])
max=v[i];
else
	if(v[i]<min)
		min=v[i];
	
	}
	printf("%d este max, %d este minim\n", max,min);

return 0;

}



