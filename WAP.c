/*Sadika Islam Tisha
Id:221-35-872*/



#include <stdio.h>
int main()
{
    int number, sum = 0, i;

    printf("Enter the number: ");
    scanf("%d", &number);

    for(i=1;i<=number;i++)
    {
        sum = sum + i;

    }

	printf("The sum is : %d\n", sum);

    return 0;
}
