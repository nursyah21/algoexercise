//For Loop

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
    int a, b;
    cin>>a;
    cin>>b;
    for(int n = a; n <= b; n++) {
        if (n==1){
        cout<<"one\n";
    }else if (n==2) {
        cout<<"two\n";
    }else if (n==3) {
        cout<<"three\n";
    }else if (n==4) {
        cout<<"four\n";
    }else if (n==5) {
        cout<<"five\n";
    }else if (n==6) {
        cout<<"six\n";
    }else if (n==7) {
        cout<<"seven\n";
    }else if (n==8) {
        cout<<"eight\n";
    }else if (n==9) {
        cout<<"nine\n";
    }else if (n%2==0) {
        cout<<"even\n";
    }else {
        cout<<"odd\n";
    }
    }
    return 0;
}

