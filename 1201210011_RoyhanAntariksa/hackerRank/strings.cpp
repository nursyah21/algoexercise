#include <iostream>
#include <string>

using namespace std;

int main() {
    string i;
    string j;

    cin >> i >> j;
    cout << i.length() << ' ' << j.length() << endl;
    
    cout << i + j << endl;
    
    swap( i[0], j[0] );
    cout << i << ' ' <<  j << endl;
    return 0;
}
