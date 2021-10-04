#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
    float km, mile;

    printf("Please enter kilometers: ");
    scanf("%f", &km);

    mile = (1 / 1.609) * km;

    printf("%.1f km is equal to %.1f miles.", km, mile);

    return 0;
}