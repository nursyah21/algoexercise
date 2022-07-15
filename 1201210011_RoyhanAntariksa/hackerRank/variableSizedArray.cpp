#include <vector>
#include <iostream>

using namespace std;

int main(){
    int n, i;
    cin >> n >> i;

    vector<int> vec[n];

    int c, d;
    for (int j = 0; j < n; j++){
        cin >> c;
        
        for (int k = 0; k < c; k++){
            cin >> d;

            vec[j].push_back(d);
        }
    }

    int e, f;
    for (int j = 0; j < i; j++){
        cin >> e >> f;
        cout << vec[e][f] << endl;
    }
    return 0;
}
