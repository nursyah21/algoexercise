#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,q;
    cin >> n >> q;
    vector<vector<int>>arr(n);
    
    for(int a=0;a<n;a++){
        int l;
        cin >> l;
        arr[a].resize(l);
        for(int b=0;b<l;b++){
            cin >> arr[a][b];
        }
    }
    for(int c=0;c<q;c++){
        int d,e;
        cin >> d;
        cin >> e;
        cout <<arr[d][e]<<endl;
    }
    return 0;
}
