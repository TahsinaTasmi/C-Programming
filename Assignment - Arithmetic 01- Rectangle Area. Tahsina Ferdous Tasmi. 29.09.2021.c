#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    float length;
    float width;
    float Area;

    printf("Enter length of rectangle: %f\n ");
    scanf("%f", &length);

    printf("Enter width of rectangle:  %f\n ");
    scanf("%f", &width);

    Area = length * width;

    printf("Area of rectangle is %f\n ", Area);

    return 0;
}
