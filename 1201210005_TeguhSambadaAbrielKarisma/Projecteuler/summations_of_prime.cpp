#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) 
    {
        int sum = 0;
        int upLimit = 2000000;
        bool isPrime[upLimit+1];

        for (int i=2; i <= upLimit; i++) {
            isPrime[i] = true;
        }

        for (int i=2; i<=upLimit; i++) {
            if (isPrime[i])
                sum += i;

                int j = i;
                while (j <= upLimit) {
                    isPrime[j] = false;
                    j += i;
                }
            }
                cout << sum << endl;
    }

