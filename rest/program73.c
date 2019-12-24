#include <stdio.h>
#include <stdlib.h>
#define DIM_MAX 30

int main()
{

int v[DIM_MAX];
int n, i;


do
{
 	printf("Dati nr de elemente din sir: ");
     scanf("%d", &n);
}while (n<1 || n>DIM_MAX);


printf("\nDati elementele:\n");
for(i=0; i<n; i++)
{
     printf("v[%d] = ", i);
     scanf("%d", &v[i]);
}

printf("***************************************\n\n");
printf("A) Primul elemente vectorului sunt: %d\n",v[0]);
printf("-----------------------------------\n");
printf("B) Ultimul elemente vectorului sunt: %d\n",v[n-1]);
printf("-----------------------------------\n");
printf("C) Elementele situate pe poziții pare sunt: ");
    
for(i=0;i<n;i++)
{
	if(i%2==0)
	{
		printf("%d ",v[i]);
	}
}
printf("\n-----------------------------------\n");

printf("D) Elementele divizible cu 3 este: ");
for(i=0; i<n; i++)
	
	{
	if(v[i]%3==0)
	{
		printf("%d ",v[i]);
	}
}
    
return 0;
}
