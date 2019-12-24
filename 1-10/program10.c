#include <stdio.h>

int main()
{
   int a,b;
   float x;
   printf("dati coeficienti ecuatiei:\n");
   printf("a=");
   scanf("%d", &a);
   printf("b=");
   scanf("%d", &b);

   if (a!=0)
   {

   	x=-1.0*b/a;
   	printf("Ecuatia are solutia %6.2f", x);

   }

   else
   	if(b==0)
   		printf("Ecuatia nu are o infinitate de soluti");
   	else
   		printf("Exuatia nu are solutie");





    return 0;
}
