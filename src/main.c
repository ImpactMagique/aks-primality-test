#include "aks.h"

#include <stdio.h>

int main(void)
{
    printf("Looping through first 100 integers applying aks...\n");
    for (int i = 0; i <= 100; i++)
    {
        if (aks(i))
        {
            printf("Number %d is prime\n", i);
        }
        else
        {
            printf("Number %d is not prime\n", i);
        }
    }
    printf("Done looping through first 100 integers applying aks...\n");
    return 0;
}
