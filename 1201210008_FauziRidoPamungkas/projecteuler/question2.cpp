#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 1;
    int c, total = 0;
    do{
        c = a + b;
        a = b;
        b = c;
        if(b%2==0){total = total + b;}
    }while(b<=4000000);
    
    cout<<total;
    
    return 0;
}
