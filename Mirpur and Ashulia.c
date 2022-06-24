/*Sadika Islam Tisha
Id:221-35-872*/
#include <stdio.h>
int main()
{

    float mirpur_meter, ashulia_meter, distance, distance_cm, distance_inch, distance_feet;

    printf("Enter distance number = ", mirpur_meter, ashulia_meter);
    scanf("%f %f", &mirpur_meter, &ashulia_meter);
    distance = mirpur_meter - ashulia_meter;
    distance_cm = distance * 100;
    distance_inch = distance * 39.37;
    distance_feet = distance * 3.21;

    printf("The distance_cm is = %.2f\n", distance_cm);
    printf("The distance_inch is = %.2f\n", distance_inch);
    printf("The distance_feet is = %.2f\n", distance_feet);

    return 0;

}
