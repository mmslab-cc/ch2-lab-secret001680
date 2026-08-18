#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char sign = 'X';
    char sign2 = '-';
    int i, j;
    int temp;
    int temp2;

    printf("(1)\n");
    // 在這裡撰寫韓信點兵的第1個函式
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if ((i == 0) || (i == 9) || (j == 0) || (j == 9))
                printf("%c", sign);
            else
                printf("%c", sign2);
        }
        printf("\n");
    }

    printf("(2)\n");
    // 在這裡撰寫韓信點兵的第2個函式
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if ((i == 0) || (i == 9) || (i == 1) || (i == 2) || (i == 8) || (i == 7)
                || (j == 0) || (j == 9) || (j == 1) || (j == 2) || (j == 8) || (j == 7))
                printf("%c", sign);
            else
                printf("%c", sign2);
        }
        printf("\n");
    }

    printf("(3)\n");
    // 在這裡撰寫韓信點兵的第3個函式
    temp = 4;
    temp2 = 5;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if ((i < 5) && (j == temp))
            {
                printf("%c", sign);
                temp--;
            }
            else if ((i < 5) && (j == temp2))
                printf("%c", sign);
            else if (i == 4)
                printf("%c", sign);
            else
                printf("%c", sign2);
        }
        temp2++;
        printf("\n");
    }

    printf("(4)\n");
    // 在這裡撰寫韓信點兵的第4個函式
    temp = 1;
    temp2 = 8;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if ((i > 0) && (i < 5) && (j == temp))
                printf("%c", sign);
            else if ((i > 0) && (i < 5) && (j == temp2))
            {
                temp++;
                printf("%c", sign);
                temp2--;
            }
            else if (i == 0)
                printf("%c", sign);
            else
                printf("%c", sign2);
        }
        printf("\n");
    }

    printf("(5)\n");
    // 在這裡撰寫韓信點兵的第5個函式
    temp = 9;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if ((i == j))
                printf("%c", sign);
            else if ((j == temp))
            {
                printf("%c", sign);
                temp--;
            }
            else
                printf("%c", sign2);
        }
        printf("\n");
    }

    system("pause");
    return 0;
}