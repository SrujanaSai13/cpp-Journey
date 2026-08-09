#include <iostream>
using namespace std;

int area(int length, int breadth) {
    return length * breadth;
}

double simpleInterest(double P, double R, double T) {
    return (P * R * T) / 100;
}

double average(int a, int b, int c) {
    return (a + b + c) / 3.0;
}

int main() {
    cout << "Area: " << area(10, 5) << endl;
    cout << "Simple Interest: " << simpleInterest(1000, 5, 3) << endl;
    cout << "Average: " << average(10, 20, 30) << endl;

    return 0;
}