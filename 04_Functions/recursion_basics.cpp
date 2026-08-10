#include <iostream>
using namespace std;

void countDown(int n) {
    if (n == 0) {
        return;
    }
    cout << n << endl;
    countDown(n - 1);
}
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}
int main() {
    cout << "Countdown:" << endl;
    countDown(5);
    cout << "\nFactorial of 5 = " << factorial(5) << endl;
    return 0;
}