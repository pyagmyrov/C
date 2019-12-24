#include <stdio.h>

int main()
{
    int data = 0;
    int sum = 0;

    printf("\nEnter negative number to display sum \n\n");

    while(1) //Infinite loop
    {
        printf("\nEnter the number: ");
        scanf("%d",&data);

        if(data <= 0)
        {
            printf("\nExit from the infinite loop\n\n");
            break;
        }
        else
        {
            sum+= data;
        }

    }

    printf("Sum of number = %d \n\n",sum);

    return 0;
}