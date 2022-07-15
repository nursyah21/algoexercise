#include <iostream>

using namespace std;

int main(){
    int dn = 1;
    while (!(
        (dn % 11 == 0) &&
        (dn % 12 == 0) && 
        (dn % 13 == 0) &&
        (dn % 14 == 0) && 
        (dn % 15 == 0) && 
        (dn % 16 == 0) && 
        (dn % 17 == 0) &&
        (dn % 18 == 0) &&
        (dn % 19 == 0) &&
        (dn % 20 == 0)   
    )){
        ++dn;
    }
    
    cout << dn << "\n";
    return 0;
}