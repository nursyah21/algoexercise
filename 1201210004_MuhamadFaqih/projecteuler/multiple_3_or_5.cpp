// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int a;
    for(int i=0;i<1000;i++){
        a = i;
        if(a%3==0 || a%5==0){
            cout << a << " ";
        }
    }

    return 0;
}