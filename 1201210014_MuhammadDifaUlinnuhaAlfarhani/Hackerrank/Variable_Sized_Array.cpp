#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int c, d, e, f, i, j, k, n;
    
    cin >> n >> i;
    vector<int> vec[n];
    for (j = 0; j < n; j++)
    {
        cin >> c;
        for (k = 0; k < c; k++)
        {
            cin >> d;
            vec[j].push_back(d);
        }
    }
    for (j = 0; j < i; j++)
    {
        cin >> e >> f;
        cout << vec[e][f] << endl;
    }
    return 0;
}