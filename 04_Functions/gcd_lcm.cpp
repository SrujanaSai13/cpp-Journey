#include <iostream>
#include <cstdlib>      //provides abs() for integers.
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int lcm(int a, int b) {
    return abs(a * b) / gcd(a, b);
}

int main() {
    int a = 12;
    int b = 18;

    cout << "For " << a << " and " << b << ":" << endl;
    cout << "GCD: " << gcd(a, b) << endl;
    cout << "LCM: " << lcm(a, b) << endl;

    int x = 15;
    int y = 25;

    cout << "\nFor " << x << " and " << y << ":" << endl;
    cout << "GCD: " << gcd(x, y) << endl;
    cout << "LCM: " << lcm(x, y) << endl;

    return 0;
}