#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a;
    cin >> a;
    int arr[a];
    for(int i = 0;i<a;i++){
        cin >> arr[i];
    }
    for(int x=a-1;x>=0;x--){
        cout << arr[x] << " ";
    }
    
    return 0;
}
