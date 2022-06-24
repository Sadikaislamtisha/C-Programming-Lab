/*Sadika Islam Tisha
Id:221-35-872*/
#include <stdio.h>
int main()
{
    char op;
    int a,b;

    printf("Enter an Operator:");
    scanf("%c", &op);
    printf("Enter two numbers\n");
    scanf("%d %d", &a, &b);

    switch(op)
    {
        case '+':
            printf("%d + %d = %d\n",a,b,a+b);
            break;
        case '-':
            printf("%d - %d = %d\n",a,b,a-b);
            break;
        case '*':
            printf("%d * %d = %d\n",a,b,a*b);
            break;
        case '/':
            printf("%d / %d = %d\n",a,b,a/b);
            break;
        default:
            printf("You have entered wrong operator\n");
    }

return 0;

}
