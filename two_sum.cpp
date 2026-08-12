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
    int target;
    cout << "Enter target: ";
    cin >> target;
    bool found = false;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (numbers[i] + numbers[j] == target) {
                cout << "Pair found at indices "
                     << i << " and " << j << endl;

                cout << "Values: "
                     << numbers[i] << " + "
                     << numbers[j] << " = "
                     << target << endl;

                found = true;
                break;
            }
        }
        if (found) {
            break;
        }
    }
    if (!found) {
        cout << "No pair found." << endl;
    }
    return 0;
}