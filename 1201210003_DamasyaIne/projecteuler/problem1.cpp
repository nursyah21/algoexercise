#include <iostream>
using namespace std;

int main() {
    int sumMultiples = 0;
    for (int i = 0; i < 1000; ++i) {
        if (!(i % 3 && i % 5)) {
            sumMultiples += i;
        }
    }
    
    cout << sumMultiples << "\n";
    return 0;
}
