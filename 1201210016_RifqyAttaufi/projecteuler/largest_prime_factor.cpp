#include <iostream>

using namespace std;

int main()
{
    int number = 2, factor;
    long long sisa = 600851475143;

    while (number <= sisa)
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
        if (isPrime)
        {
            if (sisa%number==0)
            {
                factor = number;
                sisa /= number;
            }    
        }
        number++;
    }

    cout<<factor;
}