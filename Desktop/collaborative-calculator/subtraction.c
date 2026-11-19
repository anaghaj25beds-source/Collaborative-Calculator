#include <stdio.h>

// Member 2 - Subtraction Function

float subtraction(float a, float b)
{
    float result;

    result = a - b;

    return result;
}

int main()
{
    float num1, num2, result;

    printf("===== SUBTRACTION PROGRAM =====\n");

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    result = subtraction(num1, num2);

    printf("Subtraction Result = %.2f\n", result);

    return 0;
}
