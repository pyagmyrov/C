#include <stdio.h>

int main() {

  
int num, sum;
printf("San giriz: \n");

sum = 0;

scanf ("%d", &num);

while (num > 0) {

sum += num;

scanf ("%d", &num);

}

printf ("Sum = %d ", sum);

return 0;

}
