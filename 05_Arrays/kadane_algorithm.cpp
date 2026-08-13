#include <iostream>
#include <algorithm>
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
    int currentSum = numbers[0];
    int maximumSum = numbers[0];
    for (int i = 1; i < n; i++) {
        currentSum = max(numbers[i],
                         currentSum + numbers[i]);
        maximumSum = max(maximumSum, currentSum);
    }
    cout << "Maximum subarray sum: "
         << maximumSum << endl;

    return 0;
}