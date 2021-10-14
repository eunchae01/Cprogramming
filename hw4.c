#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int num;

int binary() {
	int bi;

	if (num <= 0)
		return 0;
	else {
		bi = num % 2;
		num = num / 2;

		binary();
		return printf("%d", bi);
	}

	return 0;
}

int main(void)
{
	printf("Please enter a number: ");
	scanf("%d", &num);

	binary();

	return 0;
}