#include <iostream>
using namespace std;

int main(){
    int multiple = 0;
    for (int i = 1; i < 1000; i++){
        if (i%3 == 0 || i%5 == 0){
            multiple += i;
        }
        
    }
    cout << multiple << endl;
    return 0;
}
