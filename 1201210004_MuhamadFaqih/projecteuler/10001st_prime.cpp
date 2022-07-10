#include <iostream>

using namespace std;

int main()
{
    int prime, number = 2, tick;
    
    do{
        bool isprime = true;
        for(int i = 2;i<number;i++){
            if(number%i==0){
                isprime=0;
                break;
            }
        }
        if(isprime){
            prime=number;
            tick++;
        }
        number++;
    }while(tick < 10001);
    cout<<prime;
}