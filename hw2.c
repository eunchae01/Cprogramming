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

// 교수님 코드
// double km;
// printf("Please enter kilometers: ");
// scnaf_s("%lf", &km);
// printf("%.lf km is equal to %.1f miles. \n", km, km / 1.609);

// return 0;