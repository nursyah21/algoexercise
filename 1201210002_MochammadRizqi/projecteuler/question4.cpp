#include <stdio.h>

static int isPalin(int num) {
    // Use temporary to create reversed value.

    int test = num, rev = 0;
    while (test > 0) {
        rev = rev * 10 + (test % 10);
        test /= 10;
    }

    // Return check that original and reversed are same.

    return rev == num;
}

int main() {
    // Largest palindrome and factors that made it.

    int bigPalin = -1, big1 = 0, big2 = 0;

    // Loop through values for n1.

    for (int n1 = 100; n1 < 1000; ++n1) {
        // Addition probably faster than multiplication, so use that,
        // adding n1 each time rather than working out n1 * n2.
        // Also we baseline at 99*n1 so first is 100*n1.

        int prod = 99 * n1;
        for (int n2 = 100; n2 < 1000; ++n2) {
            prod += n1;

            // Don't check for palindrome if product is not greater,
            // this works because C shortcuts logical AND.

            if (prod > bigPalin && isPalin(prod)) {
                // A bigger palindrome? Store details.

                big1 = n1;
                big2 = n2;
                bigPalin = prod;
            }
        }
    }

    // Print out final details.

    printf("%d x %d = %d\n", big1, big2, bigPalin);
    return 0;
}