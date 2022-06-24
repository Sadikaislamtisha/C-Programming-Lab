/*Sadika Islam Tisha
Id:221-35-872*/
#include<stdio.h>
int main()

{
    float num1 , num2, num3, average;

    printf("Enter any three numbers = ", num1, num2, num3);
    scanf("%f %f %f", &num1, &num2, &num3);

    average = (num1+num2+num3)/3;

    printf("The average result is: %.2f", average);

    return 0;


}
