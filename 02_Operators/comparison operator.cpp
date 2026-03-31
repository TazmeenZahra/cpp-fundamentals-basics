// Comparison Operators with User Input
#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a number: " << endl;
    cin >> num;
    cout << "You entered number: " << num << endl;

    int digit;
    cout << "Enter a digit: " << endl;
    cin >> digit;
    cout << "You entered digit: " << digit << endl;

    cout << "Value of num and digit are equal: " << (num == digit) << endl;
    cout << "Value of num and digit are not equal: " << (num != digit) << endl;
    cout << "Value of num is greater then digit: " << (num > digit) << endl;
    cout << "Value of num is lesser then digit: " << (num < digit) << endl;
    cout << "Value of num is greater then equals to digit: " << (num >= digit) << endl;
    cout << "Value of num is less then equals to digit: " << (num <= digit) << endl;
    return 0; 
 }
