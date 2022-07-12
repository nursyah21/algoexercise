// Largest prime factor by Ryan Adi Saputra

/*
    Question:
    The prime factors of 13195 are 5, 7, 13 and 29.

    What is the largest prime factor of the number 600851475143 ?
*/


#include <iostream>
using namespace std;

int main() {
    int largest = 0;
    int counter = 2;
    long long number = 600851475143;

    while (counter <= number)
    {
        bool isPrime = true;
        for (int i = 2; i < counter; i++)
        {
            if (counter % i == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
        {
            if (number % counter == 0)
            {
                largest = counter;
                number /= counter;
            }    
        }
        counter++;
    }

    cout << largest;
    return 0;
}




// Expected Answer: 6857