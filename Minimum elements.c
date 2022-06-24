/*Sadika Islam Tisha
Id:221-35-872*/
#include<stdio.h>
int main ()
{

    int i, min;
    int arr [5];

    printf("Enter 5 elements:");

    for(i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }

    min = arr[0];
    for(i=1; i<5; i++)
    {

        if(arr[i]<min)
            min = arr[i];
    }


    printf("Minimum element is %d\n", min);

return 0;

}
