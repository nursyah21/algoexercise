#include <iostream>
#include <math.h>
using namespace std;

int square_sum(int s);
int main() {
    int limit=100 ,sum=0 ,sumQ=0;
    for(int i=1;i<=limit;i++)
{
    sumQ=sumQ+(i*i);
    sum =sum+i;
}
    cout<< "the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum is \n ";
    cout<< square_sum(sum)-sumQ ;  // without function : cout<<sum*sum-sumQ
    return 0;
}
    int square_sum(int s)
{
    return s*s;
}