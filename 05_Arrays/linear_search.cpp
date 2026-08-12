#include <iostream>
using namespace std;

int main() {
    int numbers[5];
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];
    }
    int target;
    cout << "Enter element to search: ";
    cin >> target;
    bool found = false;
    for (int i = 0; i < 5; i++) {
        if (numbers[i] == target) {
            cout << "Element found at index " << i << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Element not found." << endl;
    }
    return 0;
}