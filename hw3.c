#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int num1;
	int num2 = 1;
	int prime = 0;

	printf("Please enter a number: ");
	scanf("%d", &num1);

	while (num1 > num2)
	{
		if (num1 % num2 == 0)
		{
			prime++;
			num2++;
		}
		else
			num2++;
	}

	if (prime == 1)
	{
		printf("It is a prime number.");
	}
	else
	{
		printf("It is not a prime number.");
	}

	return 0;
}

// 교수님 코드
// int num;
// printf("Please enter a number: ");
// scanf_s("%d", &num);

// for(int i= 2; i < num; i++){
// 	if(num%i == 0){
// 		printf("It is not a prime number. \n");
// 		return 0;
// 	}
// }

// printf("It is a prime number. \n");
// return 0;