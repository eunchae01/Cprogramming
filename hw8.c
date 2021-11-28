#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int convCase(int ch)
{
    const int diff = 'a' - 'A';
    if (ch >= 'A' && ch <= 'Z')
        return ch + diff;
    else if (ch >= 'a' && ch <= 'z')
        return ch - diff;
    else
        return ch;
}

int main(void)
{
    int ch;

    printf("Input> ");

    while (1)
    {
        ch = getchar();
        ch = convCase(ch);

        if (ch == EOF)
        {
            break;
        }
        else
        {
            putchar(ch);
        }
    }

    return 0;
}