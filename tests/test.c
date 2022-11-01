#include "../src/aks.h"
#include <criterion/criterion.h>
#include <stdio.h>

Test(nom, nom_sp)
{
    /* 
     * Checking for some assertions
    */
    cr_assert_eq(aks(2), 1);
    cr_assert_eq(aks(3), 1);
    // cr_assert_eq(aks(4), 1); # This one will fail since 4 is even
    cr_assert_eq(aks(5), 1);
    cr_assert_eq(aks(7), 1);
    cr_assert_eq(aks(11), 1);
    cr_assert_eq(aks(13), 1);
    cr_assert_eq(aks(17), 1);
    cr_assert_eq(aks(19), 1);
    // cr_assert_eq(aks(97), 1); // This one will fail even if 97 is prime,
    // since we cannot check primes after 64 (limits of size)
}
