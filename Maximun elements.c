/*Sadika Islam Tisha
Id:221-35-872*/
#include <stdio.h>
int main ()
{

    int i, max;
    int arr [5];

    printf("Enter 5 elements:");

    for(i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    for(i=1; i<5; i++)
    {

        if(arr[i]>max)
            max = arr[i];
    }


    printf("Maximum element is %d\n", max);

return 0;

}
