#include <iostream>

static unsigned long lcm_until(unsigned n) noexcept {
    auto r = 1UL;
    for (auto i = 2UL; i <= n; ++i) {
        if (r % i) { // i is prime
            auto x = i;
            while (x * i <= n)
                x *= i;
            r *= x;
        }
    }
    return r;
}

int main() {
    std::cout << lcm_until(20) << '\n';
}