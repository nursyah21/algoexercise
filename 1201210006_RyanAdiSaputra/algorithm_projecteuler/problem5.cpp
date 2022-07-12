//  Smallest multiple by Ryan Adi Saputra

/*
    Question:
    2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

    What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/


#include <iostream>
using namespace std;

int main(){
    int divisors[] = { 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
    int number = 2520;
    bool perfect;

    do {
	perfect = true;
	number += 2520;
        for (int i : divisors) {
            if (number % i != 0) {
                perfect = false;
                break;
            }
        }
    } while (!perfect);

    cout << number;
    return 0;
}




// Expected Answer: 232792560