/*Sadika Islam Tisha
Id:221-35-872*/
#include<stdio.h>
#include<math.h>
int main ()
{

    double a, b, c,d, root1, root2;

    printf("Enter a numbers: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    d = sqrt (b*b - 4*a*c);

    root1 = ((-b) + d)/2*a ;
    root2 = ((-b) + d)/2*a ;

    printf("The root1 & root2 are: %lf %lf ", root1, root2);



}
