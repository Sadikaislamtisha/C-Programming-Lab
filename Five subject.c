/*Sadika Islam Tisha
Id:221-35-872*/
#include <stdio.h>
int main ()
{
    int math, eng, bang, ict, sci, marks;

    printf("Enter subjects number = ");
    scanf("%d %d %d %d %d", &math, &eng, &bang, &ict, &sci);


    marks = (math + eng + bang + ict + sci)/5;

    printf("The marks is = %d ", marks);


    return 0;

}
