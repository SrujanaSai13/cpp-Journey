#include <iostream>
using namespace std;

int main() {
    int numbers[5];
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];
    }
    int evenCount = 0;
    int oddCount = 0;
    for (int i = 0; i < 5; i++) {
        if (numbers[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    cout << "Even elements: " << evenCount << endl;
    cout << "Odd elements: " << oddCount << endl;
    return 0;
}