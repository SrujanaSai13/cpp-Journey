#include <iostream>
using namespace std;

int main() {
    int numbers[5];
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];
    }
    int left = 0;
    int right = 4;
    while (left < right) {
        swap(numbers[left], numbers[right]);
        left++;
        right--;
    }
    cout << "Reversed array: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    return 0;
}