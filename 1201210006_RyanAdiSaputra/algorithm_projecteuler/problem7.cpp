//  10001st prime by Ryan Adi Saputra

/*
    Question:
    By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

    What is the 10 001st prime number?
*/


#include <iostream>
using namespace std;

int main() {
    int counter = 2;
    int prime = 0;
    bool isPrime = true;
    
    for (int i = 3; counter < 10002; i++) {
        for (int j = 2; j < i; j++) {
            isPrime = true;
            if (i % j == 0) {
                isPrime = false;
                break;
            }
            if (counter == 10001) {
                prime = i;
            }
        }
        if (isPrime == true) {
            counter += 1;
        }
    }
    
    cout << "Prime number 10001 is " << prime;
    return 0;
}




// Expected Answer: 104743