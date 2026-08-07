#include<iostream>
using namespace std;
int main()
{
    int n=50;
    int evenSum=0;

    for (int i=1 ; i<=n ; i++){
        if(i%2==0){
            evenSum +=i;
        }
    }

    cout << "Sum of even numbers from 1 to n: " << evenSum << endl;
    return 0;

}