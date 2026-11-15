#include <stdio.h>

// 4a. Sum of first N natural numbers
int sumNatural(int n)
{
    if (n == 0)
        return 0;
    return n + sumNatural(n - 1);
}

// 4b. Factorial of a number
long long factorial(int n)
{
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

// 4c. Nth term of Fibonacci series (0-indexed: 0, 1, 1, 2, 3...)
int fibonacciTerm(int n)
{
    if (n <= 1)
        return n;
    return fibonacciTerm(n - 1) + fibonacciTerm(n - 2);
}

// 4d. Generate N terms of Fibonacci series
void printFibonacciSeries(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", fibonacciTerm(i));
    }
    printf("\n");
}

int main()
{
    int n = 6;
    printf("Sum of first %d natural numbers: %d\n", n, sumNatural(n));
    printf("Factorial of %d: %lld\n", n, factorial(n));
    printf("%dth Fibonacci term (0-indexed): %d\n", n, fibonacciTerm(n));
    printf("First %d Fibonacci terms: ", n);
    printFibonacciSeries(n);
    return 0;
}
