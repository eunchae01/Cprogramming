#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int num;

int binary()
{
	int bi;

	if (num <= 0)
		return 0;
	else
	{
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

// 교수님 코드
// void dec2bin(int num){
// 	if(num == 1)
// 		printf("1");
// 	else{
// 		int n = num % 2;
// 		dec2bin(num /2 );
// 		printf("%d", n);
// 	}
// }

// int main(void){
// 	int num;
// 	printf("Please enter a number: ");
// 	scanf_s("%d", &num);
// 	dec2bin(num);

// 	return 0;
// }