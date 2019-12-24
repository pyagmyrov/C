#include <stdio.h>

int main() {

int a,b,c,d,y;

printf("Numar: ");
scanf("%d", &y);

d=y/1000;								//a
//printf("d: %d\n", d);

b=y/100;
b=b%10;							//b
//printf("b= %d\n", b);

a=y/10;
a=a%10;							//c
//printf("a %d\n",a);

c=y%10;
//printf("c %d\n",c);				//d

if(d>b){

//printf("%d", d);

}


 if (a>b && a>c && a>d){
      if (b<c && b<d){
        y = b;
      }
      else if (c<b && c<d){
        y = c;
      }
      else if (d<b && d<c){
        y = d;
      }

      printf("Cel Mare: %d\n", a);
      printf("Cel mic: %d", y);
    }
    else if (b>a && b>c && b>d) {
      if (a<c && a<d){
        y = a;
      }
      else if(c<a && c<d){
        y = c;
      }
      else if(d<a && d<c){
        y = d;
      }

      printf("Cel Mare: %d\n", b);
      printf("Cel mic: %d", y);
    }
    else if (c>a && c>b && c>d)
    {
      if (a<b && a<d){
        y = a;
      }
      else if(b<a && b<d){
        y = b;
      }
      else if(d<a && d<b){
        y = d;
      }

      printf("Cel Mare: %d\n", c);
      printf("Cel mic: %d", y);
    }
    else if (d>a && d>b && d>c) {
      if (a<b && a<c){
        y = a;
      }
    else if(b<a && b<c){
      y = b;
    }
    else if(c<a && c<b){
      y = c;
    }

    printf("Cel Mare: %d\n", d);
    printf("Cel mic: %d", y);
  }

  return 0; 
}
