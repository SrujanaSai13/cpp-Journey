#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;
    if (marks == 100){
        cout<<"Excellent! You got a perfect score!\n";
    }
    else if(marks >=90){
        cout<<"Great job! You scored an A grade!\n";
    }
    else if(marks >=80 && marks <90){
        cout<<"Good Work! You scored a B grade!\n";
    }
    else if(marks >=70 && marks <80){
        cout<<"Nice! You scored a C grade!\n";
    }
    else{
        cout<<"Keep trying! You can do better!\n";
    }

    return 0;
}
