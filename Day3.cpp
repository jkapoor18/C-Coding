#include<iostream>
using namespace std;

int main() {
    int dividend, divisor, quotient, remainder;
    
    cout << "Enter dividend number: ";
    cin >> dividend;
    
    cout << "Enter divisor number: ";
    cin >> divisor;

    quotient = dividend / divisor;
    cout << "Quotient: " << quotient << endl;

    remainder = dividend % divisor;  
    cout << "Remainder: " << remainder << endl;

    return 0;
}
