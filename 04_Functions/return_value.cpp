#include <iostream>
using namespace std;
int findsquare (int n){
    return n*n;
}
int main(){
    int number=7;
    int result=findsquare(number);
    cout << "square=" << result << endl;
    return 0;
}