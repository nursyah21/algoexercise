#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int larrgestPalindrome(int n)
{
  int upper_limit = pow(10,n) - 1;
  int lower_limit = pow(10,n) / 10;
  int max_product = 0;
  for (int i = upper_limit;
       i >= lower_limit;
       i--)
  {
    for ( int j = i; j >= lower_limit; j--)
    {
      int product = i * j;
      
      int number = product;
      int reverse = 0;
      while (number != 0)
      {
        cout << reverse << " " << number << " " << endl;
        reverse = reverse * 10 + number % 10;
        rumber /= 10;
        cout << reverse << " " << number << " " << endl;
      }
      if (product == reverse &&
          product > max_product)
        
        max_product = product;
      
    }
  }
  return max_product;
}

int main()
{
  cout << largestPalindrome(3);
  
  return 0;
}

