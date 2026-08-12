#include <iostream>
using namespace std;

int main() {
    int numbers[5];
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];
    }
    bool sorted = true;
    for (int i = 0; i < 4; i++) {
        if (numbers[i] > numbers[i + 1]) {
            sorted = false;
            break;
        }
    }
    if (sorted) {
        cout << "Array is sorted." << endl;
    } else {
        cout << "Array is not sorted." << endl;
    }
    return 0;
}