#include <iostream>
using namespace std;
int main() {
    int flag=0,count=1,n=2,m;
    
    
    while(count<=10001){
        m=n/2;
        flag=0;
        for(int i=2;i<=m;i++){
            if(n%i==0){
                flag=1;
            }
        }
        if(flag==0){
            if(count==10001){
                count<<n;
            }
            count++;
        }
        n++;
    }
    return 0;
}
