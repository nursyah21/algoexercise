#include <iostream>

long gcd(long a, long b)
{
    long t;

    if (b == 0) return a;

    while (b != 0) {
        t = b;
        b = a % b;
        a = t;
    }
    return a;
}

long lcm(long a, long b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    long n(20), result(1);
    for (long i = n; i > n/2; --i) {
        result = lcm(result, i);
    }
    std::cout << "Result: " << result << "\n";
}
