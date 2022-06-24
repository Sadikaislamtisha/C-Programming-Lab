/*Sadika Islam Tisha
Id:221-35-872*/
#include <stdio.h>
int main()
{

    int arr_size, i, search, flag=0;
    printf("Enter the size of the array = ");
    scanf("%d", &arr_size);
    printf("Enter the element of the array = ");
    int arr [arr_size];

    for (i=0; i<arr_size; i++)

    {

        scanf("%d", &arr[i]);
    }

    printf("Enter the element you want to search\n ");
    scanf("%d", &search);

    for(i=0; i<arr_size; i++)
    {
        if(search==arr[i])
        {
            flag = 1;
            break;
        }
    }
        if(flag ==0)
            printf("Element  not found\n");
        else
            printf("Element found");


    return 0;
}
