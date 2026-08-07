#include<iostream>
using namespace std;
int main()
{
    int n=7;
    bool isPrime=true;

    for( int i=2; i*i<=n; i++) {
        if(n%i==0){
            isPrime = false;
            break;
        }
    }
    if(isPrime){
        cout << n << " is a Prime Number\n";
    } else {
        cout << n << " is not a Prime Number\n";
    }
    return 0;
}
