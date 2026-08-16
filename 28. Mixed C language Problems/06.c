// There is a series S, where the next term is the sum of previous three terms. Given the first three terms of the series, a, b and c. You have to output the nth term of the series using recursion. Input format – the first line contains a single integer, n. The next line contains three space separated integers a, b and c. The output format – print the nth term of the series.


#include <stdio.h>

long long nthTerm(int n, long long a, long long b, long long c)
{
    // Base cases
    if(n == 1)
        return a;

    if(n == 2)
        return b;

    if(n == 3)
        return c;

    // Recursive case
    return nthTerm(n - 1, a, b, c)
         + nthTerm(n - 2, a, b, c)
         + nthTerm(n - 3, a, b, c);
}

int main()
{
    int n;
    long long a, b, c;

    scanf("%d", &n);
    scanf("%lld %lld %lld", &a, &b, &c);

    printf("%lld\n", nthTerm(n, a, b, c));

    return 0;
}