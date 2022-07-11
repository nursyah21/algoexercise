#include <stdio.h>
using namespace std;

int main() {
    long long i, n = 600851475143;
    for (i = 3; n > 1; i += 2)
        while (n % i == 0)
            n /= i;
    printf("%lld\n", i - 2);
    return 0;
}