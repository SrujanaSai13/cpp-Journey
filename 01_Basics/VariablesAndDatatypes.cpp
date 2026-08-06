#include<iostream>
using namespace std;

int main()
{
    int age = 18;                       //int is used to store whole numbers
    char grade = 'A';                  //char can hold a single character and is enclosed in single quotes
    float PI = 3.14f;                 //'f' suffix indicates a float literal.PI is captial because it is a constant value
    bool ispassed = true;            //bool can only hold true or false values.Internally true-->1 and false-->0
    double largeNumber =123.456789; //double is used to store larger floating point numbers with more precision than float

    cout <<age << endl;
    cout << grade << endl;
    cout << PI << endl;
    cout << ispassed << endl;
    cout << largeNumber << endl;
    return 0;
}
