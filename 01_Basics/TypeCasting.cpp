#include<iostream>
using namespace std;
int main()
{
    double Price = 100.999;
    int NewPrice = (int)Price;//Type casting is used to convert one data type to another.Here we are converting a double to an int
                            
    cout << NewPrice <<endl; //This will print 100 even if the given value was 100.01 or 100.99 because it does not round off like math
    return 0;
}