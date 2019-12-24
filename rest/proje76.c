#include <stdio.h>  
#include <stdlib.h>  
  
float findArea(float a, float b, float c) 
{ 
    // Length of sides must be positive and sum of any two sides 
    // must be smaller than third side. 
    if (a < 0 || b < 0 || c <0 || (a+b <= c) || 
        a+c <=b || b+c <=a) 
    { 
        printf("Not a valid trianglen"); 
        exit(0); 
    } 
    float s = (a+b+c)/2; 
    return sqrt(s*(s-a)*(s-b)*(s-c)); 
} 
  
int main() 
{ 
    float a;
    float b; 
    float c;
    int d;
   
  
  printf("intra un part: ");
    scanf("%f",&a);
    printf("intra doua part: ");
    scanf("%f",&b);
    printf("intra trei part: ");
    scanf("%f",&c);
     d=(a+b+c);
    printf("Area is %f\n", findArea(a, b, c)); 
    printf("Perimetr: %d", d);
    return 0; 
} 
