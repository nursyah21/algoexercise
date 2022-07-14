#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b, c;
    char d, e;
    int f, g;
    
    cin >> a;
    cin >> b;
    
    f = a.size();
    g = b.size();
    
    cout << f;
    cout << " " << g;
    
    c = a + b;
    cout << "\n" << c;
    
    d = b[0];
    e = a[0];
    a[0] = d;
    b[0] = e;
    
    cout<<"\n";
    cout<<a;
    cout<< " " << b;
    
    return 0;
}
