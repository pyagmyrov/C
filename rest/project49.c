//fibonachi system numbers
#include <stdio.h>

int main() {

int a,b,c,d,i;

a=1;
b=1;
c=1;


for(i=1;i<=10;i++)
{

	d=a+b+c;
	a=b;
	b=c;
	c=d;
	printf("%d\n",d);
}

}















