#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    int left = 0;
    int right = str.length() - 1;
    bool palindrome = true;
    while (left < right) {
        if (str[left] != str[right]) {
            palindrome = false;
            break;
        }
        left++;
        right--;
    }
    if (palindrome) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }
    return 0;
}