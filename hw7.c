#include <stdio.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
    int num1, num2, num3, num4, num5;
    double avg, sdpow;

    printf("Enter 5 real numbers: ");

    scanf_s("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    avg = (num1 + num2 + num3 + num4 + num5) / 5;

    sdpow = pow(num1 - avg, 2) + pow(num2 - avg, 2) + pow(num3 - avg, 2) + pow(num4 - avg, 2) + pow(num5 - avg, 2);

    printf("Standard Deviation = %.3f", sqrt(sdpow / 5));

    return 0;
}