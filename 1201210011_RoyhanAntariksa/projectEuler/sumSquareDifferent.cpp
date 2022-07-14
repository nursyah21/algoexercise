#include <iostream>

using namespace std;

int main(){
    long long a = 0LL;
    long b = 0LL;
    
    for (int num = 1; num <= 100; ++num){
        a += (num * num);
        b += num;
    }
    b *= b;

    cout << (b - a) << "\n";
    return 0;
}