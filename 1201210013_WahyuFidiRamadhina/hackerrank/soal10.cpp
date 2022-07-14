#include<iostream>
#include<sstream>
using namespace std;

int main(){
 string n;
 cin >> n;
 stringstream ss(n);
 int a,b,c;
 char ch;
 ss >> a >> ch >> b >> ch  >> c >> ch;
 cout << a << "\n";
 cout << b << "\n";
 cout << c << "\n";


 return 0;
}