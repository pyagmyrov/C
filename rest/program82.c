#include <stdio.h>

int main() {
int nr=0,n,i,a;
scanf("%d",&n);
a=n%10;
while(n!=0)
{
if(a==n%10)
{
nr++;
}
n=n/10;
}
printf("apare de %d ori\n", nr);

return 0;

}
