#include <iostream>

using namespace std;
int fabionchi(int a){
    if(a<1){
        return a;
    }if(a==1){
        return 2;
    }
    return((4*fabionchi(a-1))+fabionchi(a-2));
}
int main(){
    int n;
    cin >> n;
    cout << fabionchi(n);
    return 0;
}