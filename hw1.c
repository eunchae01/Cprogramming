#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num1, num2;

    printf("두 정수를 입력하세요:");
    scanf("%d %d", &num1, &num2);

    printf("%d & %d = %d\n", num1, num2, num1 & num2);
    printf("%d | %d = %d\n", num1, num2, num1 | num2);
    printf("%d ^ %d = %d\n", num1, num2, num1 ^ num2);

    return 0;
}

//컨트롤 알트 c -> 컨트롤 알트 r