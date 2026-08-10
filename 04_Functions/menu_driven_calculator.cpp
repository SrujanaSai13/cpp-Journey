#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}
int subtract(int a, int b) {
    return a - b;
}
int multiply(int a, int b) {
    return a * b;
}
double divide(double a, double b) {
    return a / b;
}
int main() {
    int choice;
    double a, b;
    do {
        cout << "\n CALCULATOR" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;
        if (choice >= 1 && choice <= 4) {
            cout << "Enter two numbers: ";
            cin >> a >> b;
        }
        switch (choice) {
            case 1:
                cout << "Result: " << add(a, b) << endl;
                break;

            case 2:
                cout << "Result: " << subtract(a, b) << endl;
                break;

            case 3:
                cout << "Result: " << multiply(a, b) << endl;
                break;

            case 4:
                if (b == 0) {
                    cout << "Cannot divide by zero!" << endl;
                } else {
                    cout << "Result: " << divide(a, b) << endl;
                }
                break;
            case 5:
                cout << "Exiting calculator..." << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    } while (choice != 5);
    return 0;
}