#include <iostream>
using namespace std;
int main()
{
  long a = 0;
  long b = 2;
  long result = 2;
  long sum = 0;
  
  while (result < 4000000)
  {
    sum += result;
    result = 4*b + a;
    a = b;
    b = result;
  }
  cout << sum;
  return 0;
}
