#include<iostream>
using namespace std;

int main() {
    int dividend, divisor, quotient, remainder;
    
    cout << "Enter dividend number: ";
    cin >> dividend;
    
    cout << "Enter divisor number: ";
    cin >> divisor;

    quotient = dividend / divisor;
    cout << "Quotient: " << quotient<<"\n";

    remainder = dividend % divisor;  
    cout << "Remainder: " << remainder;

    return 0;
}
