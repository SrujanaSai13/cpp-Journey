#include <iostream>
using namespace std;

int square(int n) {
    return n * n;
}

int cube(int n) {
    return n * n * n;
}

int maximum(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int minimum(int a, int b) {
    if (a < b)
        return a;
    else
        return b;
}

int main() {
    int number = 5;
    int a = 10;
    int b = 20;

    cout << "Square: " << square(number) << endl;
    cout << "Cube: " << cube(3) << endl;
    cout << "Maximum: " << maximum(a, b) << endl;
    cout << "Minimum: " << minimum(a, b) << endl;

    return 0;
}