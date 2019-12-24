 #include <stdio.h> 
 #include <stdlib.h>
int main() {
int X, N, b, i = 0, r[ 10 ]; char B[] = "0123456789ABCDEF";
printf("\nIntrodu numarul in baza 10: "); scanf("%d", &N );
printf("\nIntrodu baza de conversie: "); scanf("%d", &b );
X=N; //Pastrez valoarea initiala a numarului while( N > 0 )
{
r[ i++ ] = N % b;
N /= b; //N = N / b; }
printf( "\nNumarul %d( %d ) = ", X, 10 ); while( i ) //while( i > 0 )
printf( "%c", B[ r[--i] ] ); printf("( %d ).\n", b );
return 0;
}
}
