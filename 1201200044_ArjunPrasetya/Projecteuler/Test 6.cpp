// Smallest_multiple

#include <iostream>

using namespace std;

int main()
{
    bool divides;
    int answer = 1;
    do
    {
        divides = true;
        for (int i = 1; i <= 20; i++)
        {
            if (answer % i != 0)
            {
                divides = false;
                break;
            }
        }
        answer++;
    } while (!divides);
    cout << answer-1;
}
