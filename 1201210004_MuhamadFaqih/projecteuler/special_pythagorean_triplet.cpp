#include <iostream>
using namespace std;

int main() {
    int a,b,c,s;
    cin >> s;
    for(a=1;a<s;++a){
        for(b=a;b<s;++b){
            int c = s-a-b;
            if(c>b&&a*a+b*b==c*c){
                cout<<a*b*c<<endl;
            }
        }
    }
}