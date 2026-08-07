#include<iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter ur age:";
    cin >> age;

    if(age >=18){ 
        cout<< "You are eligible to vote!\n" ;
}
else{
    cout<< "Your are not eliigible to vote!\n";
}
return 0;
}
