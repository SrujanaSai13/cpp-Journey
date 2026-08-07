#include<iostream>
using namespace std;
int main()
{
    double a , b;
    char op;

    cout<<"Enter a : ";
    cin>>a;

    cout<< "Enter operator (+, -, *, /): ";
    cin>>op;

    cout<<"Enter b : ";
    cin>>b;

    switch (op) {
        case '+': 
            cout << "Calculated Value: " << a + b;
            break;
        case '-': 
            cout << "Calculated Value: " << a - b;
            break;
        case '*': 
            cout << "Calculated Value: " << a * b;
            break;
        case '/': 
            if (b != 0) // Checking for division by zero
                cout << "Calculated Value: " << a / b;
            else
                cout << "Invalid Calculation! Cannot divide by zero.";
            break;
        default: 
            cout << "Invalid Operator! Use +, -, *, or /.";
    }


    return 0;

}