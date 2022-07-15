#include <iostream>

int main()
{
    long long int sumOfSquares = 0LL;
    long int squareOfSum = 0LL;
    
    for (int number = 1; number <= 100; ++number)
    {
        sumOfSquares += (number * number); 
        squareOfSum += number; 
    }
    squareOfSum *= squareOfSum;

    std::cout << (squareOfSum - sumOfSquares) << "\n";
}
