#include <stdio.h>
int check(int array[],int n);
int main()
{
   int n,array[10],i;
   printf("\nEnter the value of the n: ");
   scanf("%d",&n);
   printf("\nEnter the array elements: \n");
   for(i=0;i<n;i++)
   {
       scanf("%d",&array[i]);
   }
   printf("\n\n");
   if(check(array,n-1))
   {
       printf("\nArray is sorted");
   }
   else
   {
        printf("\nArray is not sorted");
   }
   return 0;
}
int check(int array[],int n)
{
  if(n==0)
  {
       return 1;
  }
  else
  {
     if(array[n]>array[n-1])
     {
       return check(array,n-1);
     }
     else
     {
       return 0;
     }
 
  }
}