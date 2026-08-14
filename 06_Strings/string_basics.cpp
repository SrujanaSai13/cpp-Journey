#include <iostream>
#include <string>
using namespace std;
int main() {
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Name: " << name << endl;
    cout << "Length: " << name.length() << endl;
    return 0;
}