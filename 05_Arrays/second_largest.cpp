#include <iostream>
#include <climits>
using namespace std;

int main() {
    int numbers[5];
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];
    }
    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    for (int i = 0; i < 5; i++) {
        if (numbers[i] > largest) {
            secondLargest = largest;
            largest = numbers[i];
        }
        else if (numbers[i] > secondLargest && numbers[i] != largest) {
            secondLargest = numbers[i];
        }
    }
    if (secondLargest == INT_MIN) {
        cout << "Second largest element does not exist." << endl;
    }
    else {
        cout << "Second largest element: " << secondLargest << endl;
    }
 return 0;
}