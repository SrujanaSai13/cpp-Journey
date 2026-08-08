#include <iostream>
using namespace std;
void first() {
    cout << "Hii!!" << endl;
}
void second() {
    first();
    cout << "This is me,Srujana!!" << endl;
}
void third(){
    second();
    cout << "I am a first year CS student." << endl;
}
int main(){
    third();

    return 0;
}