#include <iostream>
using namespace std;

int main() {
    int numbers[5];
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];
    }
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum = sum + numbers[i];
    }
    double average = (double)sum / 5;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;
    return 0;
}