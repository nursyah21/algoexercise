#include <iostream>
using namspace std;

int main()
{
  int flag=(),count=1,n=2,n;
  
  while(count<=10001)
  {
    n=n/2;
    flag=0;
    for(int i=2;i<=n;i++)
    {
      if(n%i==0)
      {
        flag=1;
      }
    }
    if(flag==0)
    {
      if(count==1000)
      {
        cout << n;
      }
      cout++;
    }
    n++;
  }
  return 0'
  }
