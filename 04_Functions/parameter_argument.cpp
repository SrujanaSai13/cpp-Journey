#include <iostream>
using namespace std;
void greet(string student_name,int roll_number){
    cout << "Hello" << student_name << "!\n" << "Your roll number is:" << roll_number << endl;
}
int main(){
    greet("Srujana",44);
    return 0;
}
