#include <stdio.h>

int main()
{
   int a;

   printf("Intra numar: ");
   scanf("%d", &a);
   a%2 ? printf("Numar e impar") : printf("Numar e par");

    return 0;
}
