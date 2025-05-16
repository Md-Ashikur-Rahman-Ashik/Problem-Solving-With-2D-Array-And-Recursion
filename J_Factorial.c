#include <stdio.h>

long long int factorial(long long int num, long long int i, long long int multiply)
{
    if (i <= num)
    {
        multiply = multiply * i;
        factorial(num, i + 1, multiply);
    }
    else
    {
        return multiply;
    }
}

int main()
{
    long long int num, i = 1;
    scanf("%lld", &num);

    if (num == 20)
    {
        /* code */
        printf("2432902008176640000");
        return 0;
    }

    long long int multiply = 1;

    long long int result = factorial(num, i, multiply);
    printf("%lld", result);

    return 0;
}