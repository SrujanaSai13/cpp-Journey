#include <iostream>
using namespace std;

int multiply(int a, int b) {
    return a * b;
}
int multiply(int a, int b, int c) {
    return a * b * c;
}
double multiply(double a, double b) {
    return a * b;
}
int main() {
    cout << "Two integers: " << multiply(5, 4) << endl;
    cout << "Three integers: " << multiply(2, 3, 4) << endl;
    cout << "Two doubles: " << multiply(2.5, 4.0) << endl;

    return 0;
}