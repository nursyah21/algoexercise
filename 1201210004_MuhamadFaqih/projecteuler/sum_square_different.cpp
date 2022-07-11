#include <iostream>

using namespace std;

int main()
{
    int limit=100,sum=0,sums=0;
    for(int i=1;i<=limit;i++){
        sums=sums+(i*i);
        sum=sum+i;
    }
    cout <<sum*sum-sums;
    return 0;
}