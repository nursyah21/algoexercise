#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    string hour[]={"even","odd","one","two","three","four","five","six","seven","eight","nine"};
    int a,b;
    for(cin>>a>>b;a<=b;a++)
        cout<<hour[a>9?a%2:a+1]<<'\n';
    return 0;
}
