#include<iostream>
using namespace std;

int main(){
    int a = 1;
    int b = 2;
    int c;
    int total = 2;

    while(c < 4000000){
        c = a+b;
        a = b;
        b = c;
        if(c%2==0){
            total += c;
        }
    }

    cout << total;
}