#include <iostream>
#include <string>

using namespace std;

int main(){
    int largestP = 0;

    for (int i = 100; i < 1000; ++i){
        for (int j = 100; j < 1000; ++j){
            int current = i * j;
            std::string currentString = std::to_string(current);
        
            if (
                (currentString == std::string{ currentString.rbegin(), currentString.rend() }) &&
                (current > largestP)
            ){
                largestP = current;
            }
        }
    }
    
    cout << largestP << "\n";
    return 0;
}