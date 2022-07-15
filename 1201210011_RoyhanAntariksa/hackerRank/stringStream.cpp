#include <sstream>
#include <vector>
#include <iostream>

using namespace std;

vector<int> parseInts(string str) {
    stringstream s(str);
	char w;
    vector<int>a;
    int temp;

    while(s >> temp){
        a.push_back(temp);
        s>>w;
    }
    return a;
}

int main() {
    string str;
    
    cin >> str;

    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    return 0;
}
