#include <iostream>

using namespace std;

int main()
{
    int prime, number = 2, count = 0;

    while (count < 10001)
    {
        bool isPrime = true;
        for (int i = 2; i < number; i++)
        {
            if (number % i == 0)
            {
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            prime=number;
            count++;
        }
        number++;
    }
    cout<<prime;
}