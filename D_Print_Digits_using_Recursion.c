#include <stdio.h>
#include <string.h>

void printDigits(int testcases, int integerArray[], int i)
{
    if (i >= 0)
    {
        if (integerArray[i] < 10)
        {
            printDigits(testcases, integerArray, i - 1);
            printf("%d ", integerArray[i]);
        }
        else
        {
            int num = integerArray[i] % 10;
            integerArray[i] = integerArray[i] / 10;
            printDigits(testcases, integerArray, i);
            printf("%d\n", num);
            /* code */
        }
    }
}

int main()
{
    int testcases;
    scanf("%d", &testcases);

    int i = testcases - 1;

    int integerArray[testcases];

    for (int i = 0; i < testcases; i++)
    {
        /* code */
        scanf("%d", &integerArray[i]);
    }

    printDigits(testcases, integerArray, i);

    return 0;
}