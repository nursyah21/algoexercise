#include <iostream>
#include <vector>
#include <cmath>

int main()
{
    long long int number = 600'851'475'143LL;
    long long int highestPrimeFactor = 0LL;
    long long int currentFactor = 2LL;
    while (number > highestPrimeFactor)
    {
        if (
            (number % currentFactor == 0) && 
            (currentFactor > highestPrimeFactor)
        ) 
        {
            highestPrimeFactor = currentFactor;
            number /= currentFactor; 
        }
        else
        {
            ++currentFactor; 
        }
    }
    
    std::cout << highestPrimeFactor << "\n";
}
