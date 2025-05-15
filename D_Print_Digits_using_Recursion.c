#include <stdio.h>
#include <string.h>

void digitPrint(int num)
{
    if (num == 0)
    {
        /* code */
        return;
    }

    digitPrint(num / 10);
    int lastDigit = num % 10;
    printf("%d ", lastDigit);
}

void testcaseInput(int testcases, int countCase)
{
    if (countCase == testcases)
    {
        /* code */
        return;
    }

    int num;
    scanf("%d", &num);
    if (num == 0)
    {
        /* code */
        printf("0");
    }

    digitPrint(num);
    printf("\n");
    testcaseInput(testcases, countCase + 1);
}

int main()
{
    int testcases, countCase = 0;
    scanf("%d", &testcases);

    testcaseInput(testcases, countCase);

    return 0;
}