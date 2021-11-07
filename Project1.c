#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

float nowKospi, maxKospi, minKospi, aftKospi, term;

float screen() {
	printf("*** 지수연동예금 KOSPI200 양방향형 이율 계산기 ***\n");

	printf("현재 KOSPI200 지수: ");
	scanf("%f", &nowKospi);

	printf("향후 1.5년 내 최고 KOSPI200 지수: ");
	scanf("%f", &maxKospi);

	printf("향후 1.5년 내 최저 KOSPI200 지수: ");
	scanf("%f", &minKospi);

	printf("1.5년 후 KOSPI200 지수: ");
	scanf("%f", &aftKospi);

	printf("예치 기간 (18개월 이하): ");
	scanf("%f", &term);

	return nowKospi, maxKospi, minKospi, aftKospi, term;
}

double expect() {
	double interest = 0;

	if (term < 3.0) {
		interest = -1.39;
		printf("\n\n예상 이율은 %.2f%%입니다.", interest);
	}
	else if (term >= 3 && term < 6) {
		interest = -1.23;
		printf("\n\n예상 이율은 %.2f%%입니다.", interest);
	}
	else if (term >= 6 && term < 9) {
		interest = -1.11;
		printf("\n\n예상 이율은 %.2f%%입니다.", interest);
	}
	else if (term >= 9 && term < 12) {
		interest = -0.98;
		printf("\n\n예상 이율은 %.2f%%입니다.", interest);
	}
	else if (term >= 12 && term < 15) {
		interest = -0.86;
		printf("\n\n예상 이율은 %.2f%%입니다.", interest);
	}
	else if (term >= 15 && term < 18) {
		interest = -0.73;
		printf("\n\n예상 이율은 %.2f%%입니다.", interest);
	}
	else if (term == 18.0) {
		if (maxKospi > (nowKospi + (nowKospi * 0.15)) || minKospi < (nowKospi - (nowKospi * 0.15))) {
			interest = 1;
			printf("\n\n예상 이율은 %.2f%%입니다.", interest);
		}
		else if (aftKospi > nowKospi) {
			interest = 1 + (aftKospi - nowKospi) * 100 / nowKospi * 0.41;
			printf("\n\n예상 이율은 %.2f%%입니다.", interest);
		}
		else if (aftKospi < nowKospi) {
			interest = 1 + (nowKospi - aftKospi) * 100 / nowKospi * 0.41;
			printf("\n\n예상 이율은 %.2f%%입니다.", interest);
		}
		else
			return 0;
	}
	else
		return 0;

	return 0;
}


int main(void)
{
	screen();
	expect();

	return 0;
}