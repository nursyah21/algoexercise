// Sum_square_differece

#include <iostream>

using namespace std;

int main()
{
    int sum_square = 0, square_sum = 0, total;

    for (int i = 1; i <= 100; i++)
    {
        sum_square += i;
        square_sum += (i * i);
    }

    sum_square = sum_square * sum_square;

    total = sum_square - square_sum;
    cout << total;
}
