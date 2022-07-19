#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int a){
    if (a==2||a==3){
        return true;
    }
    if (a%2==0){
        return false;
    }

    bool prime=true;
    for (int b=2;b<sqrt(a);b++){
        if (a%b==0)
            prime=false;

    }
    if (prime==true)
        return true;
    else 
        return false;
}

int main(){
    int infinite=0;
    long long int primecounter=0;
    for (int c=2;infinite==0;c++){
        if (isPrime(c)==true){
            primecounter++;
            //cout<<c<<endl;
            if (primecounter==10001)
                {cout<<c;

            break;}
        }
    }
    return 0;
    }