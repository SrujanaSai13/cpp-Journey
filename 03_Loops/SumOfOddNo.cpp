#include<iostream>
using namespace std;
int main()
{
    int n=50;
    int oddSum=0;

    for (int i=1 ; i<=n ; i++){
        if(i%2!=0){
            oddSum +=i;
        }
    }

    cout << "Sum of odd numbers from 1 to n: " << oddSum << endl;
    return 0;
}
