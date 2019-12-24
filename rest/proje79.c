#include <stdio.h>
int main()
{
	int number;
	
	/*infinite loop*/
	while(1)
	{
		printf("Enter integer number: ");
		scanf("%d",&number);
		if(number<0 || number==0)
		{
			printf("Terminating loop...\n");
			break;
		}
		/*print the number*/
		printf("Number is: %d\n",number);
	}
	printf("Bye, Bye...\n");
	
	return 0;
}