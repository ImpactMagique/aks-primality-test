#include <stdio.h>

long long c[100];

void pascals_triangle(int n)
{
    c[0] = 1;
    for (int i = 0; i < n; c[0] = -c[0], i++)
    {
        c[1 + i] = 1;
        for (int j = i; j > 0; j--)
        {
            c[j] = c[j - 1] - c[j];
        }
    }
}

int aks(int n)
{
    /* An integer n greater than 2 is prime if and and only if 
     * the polynomial congruence relation 
     * (x + a) ^ n = (x^n + a) (mod x^r -1, n)
     */

    // Prepare every coefficients thanks to Pascal's triangle'
    pascals_triangle(n);
    c[0]++;
    c[n]--;

    int tmp = n;
    while (tmp-- && c[tmp] % n == 0)
    {
        continue;
    }
    return tmp < 0;
}
