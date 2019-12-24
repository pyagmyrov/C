#include <stdio.h>

int main() {

	int i,sayi,c,y=1;
	int dizi[100];

printf("Nace san girjek?");
scanf("%d", &sayi);

for(i=0;i<sayi;i++){
printf("San giriz: ",i+1);
scanf("%d",&dizi[i]);

	for ( c = 2 ; c <= i - 1 ; c++ )
   {
      if ( i%c == 0 )
      {
         printf("%d isn't prime.\n", i);
     break;
      }
   }
   if ( c == i )
      printf("%d is prime.\n", i);

}

	

printf("\n\n");

return 0;

}
