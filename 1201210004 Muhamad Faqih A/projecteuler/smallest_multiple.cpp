#include <iostream>

using namespace std;

bool divide;

int main()
{
    for (long i = 2520; ; i += 20){
        divide = true;
        for (int j = 20; j > 10; j--){
            if (!(i%j == 0)){
            divide = false;
            break;
            }
        }
        if (divide){
            cout << i;
            break;
        }
    }
    return 0;
}
