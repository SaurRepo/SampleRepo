#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPrime(int n)
{
    static int i = 2;

    printf("%d,%d\n",n,i);
    // corner cases
    if (n == 0 || n == 1) {
        return false;
    }

    // Checking Prime
    if (n == i)
        return true;

    // base cases
    if (n % i == 0) {
        return false;
    }
    i++;
    return isPrime(n);
}

int main()
{
    printf("%d",isPrime(97));
    return 0;
}

