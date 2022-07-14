#include <iostream>
using namespace std;

int main() {
    int sum, squared, result = 0;
    int N = 100;

    sum = N * (N+1)/ 2;
    squared = (N * (N + 1) * (2 * N + 1)) / 6;

    result = sum * sum - squared;
    cout << result;
    return 0;
}




// Expected Answer: 25164150
