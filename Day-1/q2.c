#include <stdio.h>

int main()
{
    float a, b;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("Sum = %f\n", a + b);
    printf("Difference = %f\n", a - b);
    printf("Product = %f\n", a * b);

    if (b != 0)
    {
        printf("Quotient = %f\n", a / b);
    }
    else
    {
        printf("Cannot divide by zero\n");
    }

    return 0;
}
