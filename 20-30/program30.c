
#include<stdio.h>
int main()
{
      int n,s1=0,s2=0;
     
      do
      {
            printf("Numar: : ");
            scanf("%d",&n);
            if(n%2==0)
                  s1=s1+n;
            else
                  s2=s2+n;
      }while(n!=0);
      printf("\nsuma numerelor pare :  %d\n",s1);
      printf("\nsuma numerelor impare  :  %d\n",s2);
      return 0;
}