#include <stdio.h>
#include <time.h>

int main() 
{
float a,b,c,e;
char d[30],g[30];
time_t timp;
time(&timp);

printf("Prenume dvs: ");
scanf("%s", d);

printf("Nume dvs: ");
scanf("%s", g);

printf("Nota de PCLP dvs: \n");
scanf("%f", &a);

printf("Nota de GAC dvs: \n");
scanf("%f", &b);

printf("Nota de Analiza Matematica dvs: \n");
scanf("%f", &c);
e=(a+b+c)/3;
printf("-----------------------------\n");
printf("\n\nCARNET NOTE\n");
printf("Data si Ora curenta: %s",ctime(&timp));
printf("Student: %s %s\n\n", g,d);

printf("Nr. Crt.\tDisciplina\tNota Examen\n");
printf("---------------------------------------\n");
printf("1.\t\tPLCP\t\t%.2f\n",a);
printf("2.\t\tGAC\t\t%.2f\n",b);
printf("3.\t\tAnaliz Mate\t%.2f\n\n",c);
printf("Media Pentru Semestrul I Este: %.2f", e);

return 0;

}







/*int main() {
time_t timp;
time(&timp);

printf("%s\n", ctime(&timp));
*/