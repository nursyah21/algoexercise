#include <iostream>

int main()
{
    long long int sumOfSquares = 0LL;
    long int squareOfSum = 0LL;

    for (int number = 1; number <= 100; ++number)
    {
        sumOfSquares += (number * number); // Add the square of the current number
        squareOfSum += number; // Add the current number to the sum
    }
    squareOfSum *= squareOfSum; // Square the sum

    std::cout << (squareOfSum - sumOfSquares) << "\n";
}
