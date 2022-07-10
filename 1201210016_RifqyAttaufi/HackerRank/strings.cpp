#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string a, b;
    cin >> a;
    cin >> b;
    cout << a.length() << " " << b.length() << endl;
    cout << a + b << endl;
    char temp = b[0];
    b[0] = a[0];
    a[0] = temp;
    cout << a << " " << b;

    return 0;
}
