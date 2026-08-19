#include <stdio.h>

int main()
{
    float length, breadth, area, perimeter;

    printf("Enter length: ");
    scanf("%f", &length);

    printf("Enter breadth: ");
    scanf("%f", &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("Area = %f\n", area);
    printf("Perimeter = %f\n", perimeter);

    return 0;
}
