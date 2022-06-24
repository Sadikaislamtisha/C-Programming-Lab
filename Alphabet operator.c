/*Sadika Islam Tisha
Id:221-35-872*/
#include <stdio.h>
int main()
{
    char character;
    printf("Enter any character: ");
    scanf("%c", &character);
    (character>='a' && character<='z') || (character>='A' && character<='Z')
    ? printf("It is alphabet")
    : printf("It is not alphabet ");

    return 0;
}
