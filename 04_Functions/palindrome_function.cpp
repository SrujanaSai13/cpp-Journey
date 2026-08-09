#include <iostream>
using namespace std;

bool isPalindrome(int n) {
    int original = n;
    int reversed = 0;

    while (n > 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n = n / 10;
    }

    return original == reversed;
}

int main() {
    int numbers[] = {121, 123, 1331, 12321};

    for (int number : numbers) {
        if (isPalindrome(number)) {
            cout << number << " → Palindrome" << endl;
        } else {
            cout << number << " → Not Palindrome" << endl;
        }
    }

    return 0;
}