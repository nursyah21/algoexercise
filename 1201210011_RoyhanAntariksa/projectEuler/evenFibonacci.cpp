#include <iostream>

using namespace std;

int main(){
    int previousFibNum1 = 0;
    int currentFibNum = 1;
    
    int fibNumSum = 0;
    
    while(currentFibNum <= 4000000){
        fibNumSum += (currentFibNum % 2 == 0) ? currentFibNum : 0;
        
        int previousFibNum2 = previousFibNum1;
        previousFibNum1 = currentFibNum;
        currentFibNum = previousFibNum2 + previousFibNum1;
    }
    
    cout << fibNumSum << "\n";
    return 0;
}