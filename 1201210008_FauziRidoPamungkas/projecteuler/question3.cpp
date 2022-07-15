#include <iostream>

using namespace std;

int main ()
{
long long factor  = (600851475143);
int a = 2;

while ((a * a) <= factor)

if (factor % a == 0)
{
    cout << a << endl;
    factor /= a;
}else
    a++;

    cout << factor << endl;
}
