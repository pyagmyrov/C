
#include <stdio.h>

int main(){
    int a,b,c,d,e;
  
    printf("Birinji egzamin giriz:  ");
    scanf("%d", &a);
    
    printf("Ikinji egzamin giriz:  ");
       scanf("%d", &b);
    
    printf("Ucunji egzamin giriz:  ");
       scanf("%d", &c);
    
    printf("Dordunji egzamin giriz:  ");
       scanf("%d", &d);
    
    e=(a+b+c+d)/4;
    
    if (e<=50) {
       printf("balyn %d, yagny 2 lik", e);
    }


    if (e>=50 && e<=60) 
    {
           printf("balyn %d, yagny 3 lik", e);
    }

    if (e>=60 && e<=70) 
    {
         printf("balyn %d, yagny 4 lik", e);
    }
    if (e>70 && e<=85) 
    {
         printf("balyn %d, yagny 4.5 lyk", e);
    }

    if (e>85)
    {
    	printf("balyn %d, yagny 5 lik", e);
    }
}
