#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    long long number = 600'851'475'143LL;
    long long highestPrimeFactor = 0LL;
    long long currentFactor = 2LL;
    while (number > highestPrimeFactor){
        if (
            (number % currentFactor == 0) && 
            (currentFactor > highestPrimeFactor)
        ){
            highestPrimeFactor = currentFactor;
            number /= currentFactor;
        }
        else
        {
            ++currentFactor;   
        }
    }
    
    cout << highestPrimeFactor << "\n";
    return 0;
}