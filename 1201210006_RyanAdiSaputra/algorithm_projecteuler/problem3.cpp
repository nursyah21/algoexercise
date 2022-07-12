// Largest prime factor by Ryan Adi Saputra

/*
    Question:
    The prime factors of 13195 are 5, 7, 13 and 29.

    What is the largest prime factor of the number 600851475143 ?
*/


#include <iostream>
using namespace std;

int main() {
    long number = 600851475143;
    long newNumber = number;
    long largest = 0;
    int counter = 2;

    while (counter * counter <= newNumber) {
        if (newNumber % counter == 0) {
            newNumber = newNumber / counter;
            largest = counter;
        } else {
            counter++;
        }
    }
    
    if (newNumber > largest) {
        largest = newNumber;
    }

    cout << largest;
    return 0;
}




// Expected Answer: 6857