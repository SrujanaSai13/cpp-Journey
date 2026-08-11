#include <iostream>
using namespace std;

int main() {
    int numbers[5];
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];
    }
    int maximum = numbers[0];
    int minimum = numbers[0];
    for (int i = 1; i < 5; i++) {

        if (numbers[i] > maximum) {
            maximum = numbers[i];
        }

        if (numbers[i] < minimum) {
            minimum = numbers[i];
        }
    }
    cout << "Maximum: " << maximum << endl;
    cout << "Minimum: " << minimum << endl;
    return 0;
}