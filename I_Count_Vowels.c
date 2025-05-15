#include <stdio.h>
#include <string.h>

int countString(char stringArray[], int stringLength, int vowelCount, int i)
{
    if (i == stringLength)
    {
        /* code */
        return vowelCount;
    }

    if (stringArray[i] == 'a' || stringArray[i] == 'e' || stringArray[i] == 'i' || stringArray[i] == 'o' || stringArray[i] == 'u' || stringArray[i] == 'A' || stringArray[i] == 'E' || stringArray[i] == 'O' || stringArray[i] == "I" || stringArray[i] == "U")
    {
        vowelCount++;
    }
    countString(stringArray, stringLength, vowelCount, i + 1);
}

int main()
{
    char stringArray[201];
    fgets(stringArray, 201, stdin);

    int stringLength = strlen(stringArray);

    int vowelCount = 0;
    int i = 0;

    int result = countString(stringArray, stringLength, vowelCount, i);
    printf("%d", result);

    return 0;
}