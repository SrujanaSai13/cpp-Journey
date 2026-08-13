#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int numbers[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    int candidate = numbers[0];
    int count = 1;
    for (int i = 1; i < n; i++) {
        if (count == 0) {
            candidate = numbers[i];
            count = 1;
        }
        else if (numbers[i] == candidate) {
            count++;
        }
        else {
            count--;
        }
    }
    cout << "Majority element: " << candidate << endl;
    return 0;
}