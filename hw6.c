#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
    int arr1[6] = {1, 2, 3, 4, 5, 6};
    int arr2[6] = {7, 8, 9, 10, 11, 12};

    int *arr1ptr = arr1;
    int *arr2ptr = arr2;

    int i, temp;

    printf("arr1:");
    for (i = 0; i < 6; i++)
    {
        printf("%d ", arr1[i]);
        // printf("%d", arr2[i]);
    }
    printf("\n");

    printf("arr2:");
    for (i = 0; i < 6; i++)
    {
        printf("%d ", arr2[i]);
    }
    printf("\n\n");

    printf("after swap\n");

    printf("arr1:");
    for (i = 0; i < 6; i++)
    {
        temp = *(arr1ptr + i);
        *(arr1ptr + i) = *(arr2ptr + i);
        *(arr2ptr + i) = temp;
    }

    for (i = 0; i < 6; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    printf("arr2:");
    for (i = 0; i < 6; i++)
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}