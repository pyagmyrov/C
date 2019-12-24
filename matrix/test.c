
#include <stdio.h>

int main() {


printf("\n*****************\n");
printf("**   Menyu    **\n");
printf("*****************\n");
printf("\n");
printf("1. Goshmak\n");
printf("2. Kopeltmek\n");
printf("3. Kwadrat\n");
printf("4. Kup\n");
printf("5.Denleme (5x^2+4x+3)\n");
printf("\n");
int s1,s2,saylaw,jogap;
Salam:
printf("Saylan: ");
scanf("%d",&saylaw);

switch(saylaw){
    case 1:
        printf("Sanlary prabel bilen giriz: ");
        scanf("%d%d",&s1,&s2);
        jogap=s1+s2;
        printf("%d+%d=%d\n",s1,s2,jogap);
        goto Salam;
    case 2:
        printf("Sanlary prabel bilen giriz: ");
        scanf("%d%d",&s1,&s2);
        jogap=s1*s2;
        printf("%d*%d=%d\n",s1,s2,jogap);
        break;
    case 3:
        printf("San giriz: ");
        scanf("%d",&s1);
        jogap=s1*s1;
        printf("%d sanyn kwadrady %d",s1,jogap);
        break;
    case 4:
        printf("San giriz: ");
        scanf("%d",&s1);
        jogap=s1*s1*s1;
        printf("%d sanyn kuby %d",s1,jogap);
        break;
    case 5:
        printf("X-yn bahasyny giriz: ");
        scanf("%d",&s1);
        jogap=5*(s1*s1)+4*s1+3;
        printf("5*(%d^2)+4*%d+3=%d",s1,s1,jogap);

        break;
}



return 0;

}
