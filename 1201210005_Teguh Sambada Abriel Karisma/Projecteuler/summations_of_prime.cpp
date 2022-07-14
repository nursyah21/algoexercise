#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // upper limit & sum
    int sum = 0;
    int upLimit = 2000000;

    // array of isPrime check for integers
    bool isPrime[upLimit+1];

    // initialize
    for (int i=2; i <= upLimit; i++) {
        isPrime[i] = true;
    }

    for (int i=2; i<=upLimit; i++) {
        if (isPrime[i]) {
            // add to sum
            sum += i;

            // mark all multiples
            int j = i;
            while (j <= upLimit) {
                isPrime[j] = false;
                j += i;
            }
        }
    }
    cout << sum << endl;
}